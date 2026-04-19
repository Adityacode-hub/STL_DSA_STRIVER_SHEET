#include<iostream>
#include<vector>
#include<queue>
//where there is linear order traversal or  bfs then use queue

using namespace std;
vector<int> bfs(vector<vector<int>>& adj)
{
    int n = adj.size();
    vector<int> res;
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        res.push_back(node);

        for(int i = 0; i < adj[node].size(); i++)
        {
            int neigh = adj[node][i];

            if(visited[neigh] == false)
            {
                q.push(neigh);
                visited[neigh] = true;
            }
        }
    }

    return res;
}
int main()
{
    vector<vector<int>>adj={{
        1,2
    },
{0,3},
{0},
{1}};
vector<int>ans=bfs(adj);
for(int x:ans)
{
    cout<<x<<" ";
}
return 0;
}