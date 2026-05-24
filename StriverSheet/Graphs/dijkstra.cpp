#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

vector<int> dijkstra(vector<vector<pair<int,int>>>& adj, int src)
{
    int V=adj.size();
    //Min-heap (priority queue) storing pair of(distance,node)
    priority_queue<pair<int,int>,vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    vector<int>dist(V,INT_MAX);
    //distance from source and itself is zero
    dist[src]=0;
    pq.emplace(0,src);
    //process the queue until all reachable vertices are finalised
    while (!pq.empty())
    {
        auto top=pq.top();
        pq.pop();
        int d=top.first;
        int u=top.second;
        //if the distance not the latest shortest one skip it
        if(d>dist[u])//this is the old value then leave it
        {
            continue;
        }
        //explore all the possible neighbours of the current vertex
        for(auto&p:adj[u])
        {
            int v=p.first;
            int w=p.second;
            //if we found a shoreted path to v through u,upadte it 
            if(dist[u]+dist[v])
            {
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    //return the final shortage distance from the source
    return dist;
}
int main()
{
    int src = 0;

    // Graph representation:
    // 0 --4-- 1
    // |      / \
    // 8     3   6
    // |    /     \
    // 2 --2-- 3 --10-- 4

    vector<vector<pair<int, int>>> adj = {
        {{1, 4}, {2, 8}},           // 0
        {{0, 4}, {4, 6}, {2, 3}},   // 1
        {{0, 8}, {3, 2}, {1, 3}},   // 2
        {{2, 2}, {4, 10}},          // 3
        {{1, 6}, {3, 10}}           // 4
    };

    vector<int> dist = dijkstra(adj, src);

    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 0; i < dist.size(); i++)
    {
        cout << "Node " << i << " -> " << dist[i] << endl;
    }

    return 0;
}