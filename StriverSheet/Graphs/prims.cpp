#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int prims(int n,vector<vector<pair<int,int>>>&adj)
{
    vector<bool>visited(n,false);
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    int totalweight=0;
    pq.push({0,0});
    while(!pq.empty())
    {
        int wt=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(visited[u])
        {
            continue;
        }
        visited[u]=true;
        totalweight+=wt;
        //check neighbour
        for(auto&edge:adj[u])
        {
            int v=edge.first;
            int weight=edge.second;
            if(!visited[v])
            {
                pq.push({weight,v});
            }
        }
    }
    return totalweight;
}
int main()
{
    int n=4;

    vector<vector<pair<int,int>>> adj(n);

    // u -> v , weight

    adj[0].push_back({1,2});
    adj[1].push_back({0,2});

    adj[0].push_back({3,5});
    adj[3].push_back({0,5});

    adj[1].push_back({2,1});
    adj[2].push_back({1,1});

    adj[2].push_back({3,3});
    adj[3].push_back({2,3});

    cout << "MST Weight = " << prims(n, adj);

    return 0;

}