#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        vector<int> adj[V];

        // build graph
        for(auto &e : edges)
        {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
        }

        // indegree
        vector<int> indegree(V, 0);
        for(auto &e : edges)
        {
            int v = e[1];
            indegree[v]++;
        }

        // queue
        queue<int> q;
        for(int i = 0; i < V; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }

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

        return count != V;   // true = cycle, false = no cycle
    }
};

int main()
{
    int V = 3;

    vector<vector<int>> edges = {
        {0,1},
        {1,2},
        {2,0}   // cycle
    };

    Solution obj;

    if(obj.isCyclic(V, edges))
        cout << "Cycle detected\n";
    else
        cout << "No cycle\n";

    return 0;
}