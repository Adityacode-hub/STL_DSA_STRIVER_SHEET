#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>& adj, int node, vector<int>& result, vector<bool>& visited)
{
    result.push_back(node);
    visited[node] = true;

    for(int i = 0; i < adj[node].size(); i++)
    {
        int neighbour = adj[node][i];

        if(visited[neighbour] == false)
        {
            dfs(adj, neighbour, result, visited);
        }
    }
}

vector<int> dfsTraversal(vector<vector<int>>& adj)//wew want to store it as the vector so we require this 
{
    int n = adj.size();
    vector<int> res;
    vector<bool> vis(n, false);

    dfs(adj, 0, res, vis); // start from node 0

    return res;
}

int main()
{
    vector<vector<int>> adj = {
        {1,2},
        {0,3},
        {0},
        {1}
    };

    vector<int> ans = dfsTraversal(adj);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}