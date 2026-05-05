#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    bool dfs(unordered_map<int,vector<int>>& adj,
             int node,
             vector<bool>& visited,
             vector<bool>& inRec,
             stack<int>& st)
    {
        visited[node] = true;
        inRec[node] = true;

        for (auto &v : adj[node])
        {
            // go to neighbor v (FIXED)
            if (!visited[v])
            {
                if (dfs(adj, v, visited, inRec, st))
                    return true;
            }
            // cycle check
            else if (inRec[v])
            {
                return true; // cycle found
            }
        }

        inRec[node] = false;   // backtrack
        st.push(node);         // push after children
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        unordered_map<int,vector<int>> adj;

        // build graph (FIXED)
        for (auto &e : prerequisites)
        {
            int a = e[0];
            int b = e[1];

            adj[b].push_back(a); // b → a
        }

        vector<bool> visited(numCourses, false);
        vector<bool> inRec(numCourses, false);
        stack<int> st;

        // DFS on all nodes (FIXED syntax)
        for (int i = 0; i < numCourses; i++)
        {
            if (!visited[i])
            {
                if (dfs(adj, i, visited, inRec, st))
                {//if found cycle then return the empty 
                    return {}; // cycle → no valid order
                }
            }
        }

        // build answer
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};