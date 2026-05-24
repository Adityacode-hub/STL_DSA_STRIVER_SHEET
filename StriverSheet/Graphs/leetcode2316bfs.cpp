#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

class Solution {
public:

    void bfs(int start,
             unordered_map<int,vector<int>>& adj,
             vector<bool>& visited,
             long long& size)
    {
        queue<int> q;
//insert into queue then mark it as visited
        q.push(start);
        visited[start] = true;

        while(!q.empty())
        {
            int u = q.front();
            q.pop();

            size++;

            for(int &v : adj[u])
            {
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    long long countPairs(int n, vector<vector<int>>& edges) 
    {
        unordered_map<int,vector<int>> adj;

        // adjacency list
        for(auto &vec : edges)
        {
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n,false);

        long long remainingNodes = n;
        long long result = 0;

        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                long long size = 0;

                bfs(i,adj,visited,size);

                result += size * (remainingNodes-size);

                remainingNodes -= size;
            }
        }

        return result;
    }
};