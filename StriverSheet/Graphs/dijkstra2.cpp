#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using namespace std;
vector<int> dijkstra(int n, vector<vector<int>>& edges, int sr)
{
    vector<vector<pair<int,int>>> a(n);

    // adjacency list
    for(int i = 0; i < edges.size(); i++)
    {
        int s = edges[i][0];
        int d = edges[i][1];
        int w = edges[i][2];

        a[s].push_back({d,w});
        a[d].push_back({s,w});
    }

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    vector<int> dist(n, INT_MAX);

    dist[sr] = 0;

    pq.push({0, sr});

    while(!pq.empty())
    {
        pair<int,int> p = pq.top();
        pq.pop();

        int d = p.first;
        int node = p.second;

        if(d > dist[node])
        {
            continue;
        }

        for(int j = 0; j < a[node].size(); j++)
        {
            int neighbour = a[node][j].first;
            int wt = a[node][j].second;

            if(d + wt < dist[neighbour])
            {
                dist[neighbour] = d + wt;

                pq.push({d + wt, neighbour});
            }
        }
    }

    return dist;
}

int main()
{
    int n = 5;

    vector<vector<int>> edges = {
        {0,1,2},
        {0,2,4},
        {1,2,1},
        {1,3,7},
        {2,4,3},
        {3,4,1}
    };

    int src = 0;

    vector<int> ans = dijkstra(n, edges, src);

    cout << "Shortest distances from source:\n";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << "Node " << i << " -> " << ans[i] << endl;
    }

    return 0;
}