#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> topoSort(int V, vector<vector<int>>& edges) {

    vector<int> ans;

    // 1. adj list banao
    vector<int> adj[V];

    for(auto &e : edges)
    {
        int u = e[0];
        int to = e[1];
   //u --> v
        adj[u].push_back(to);
    }

    // 2. indegree array v is the numbr of edge
    vector<int> indegree(V, 0);

    for(auto &e : edges)
    {
        int u = e[0];
        int to = e[1];
//jispe gaya uska degree add hoga
        indegree[to]++;
    }

    // 3. queue (indegree 0) usko push karo jiska degree 0 ho
    queue<int> q;

    for(int i = 0; i < V; i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // 4. BFS loop
    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for(int v : adj[node])
        {
            indegree[v]--;

            if(indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }

    return ans;
}

int main()
{
    int V = 4;

    vector<vector<int>> edges = {
        {0,1},
        {0,2},
        {1,3},
        {2,3}
    };

    vector<int> result = topoSort(V, edges);

    cout << "Topological Sort: ";
    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}