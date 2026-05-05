#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        
        for(auto &e : prerequisites)
        {
            int course = e[0];
            int prereq = e[1];

          //u --> v directed graph
          
            adj[prereq].push_back(course); // direction fix
        }

        // 2. indegree
        vector<int> indegree(numCourses, 0);

        for(auto &e : prerequisites)
        {
            int course = e[0];
            indegree[course]++;
        }

        // 3. queue
        queue<int> q;

        for(int i = 0; i < numCourses; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }

        // 4. BFS
        int count = 0;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            count++;

            for(int v : adj[node])
            {
                indegree[v]--;

                if(indegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }

        // 5. check
        return count == numCourses;

        // if(count==numCourses)
        // {
         //   return true ;//no cycle
         //}
        // else
        // {
          //  return false;//cycle hai
         //}
    }
};