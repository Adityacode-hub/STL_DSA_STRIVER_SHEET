#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
 void bfs(vector<vector<int>>&adj,int start,vector<bool>&visited)
 { 
    int n=adj.size();
    //first ek queue bana
    queue<int>q;
    //starting mei push karo 
    q.push(start);
    //mark visited as true
    visited[start]=true;
    //iterate until the queue is empty
    while(!q.empty())
    { //take the first elemnt and store it in variable 
        int node=q.front();
        //pop the element which is in the first
        q.pop();
        //iterate the nodes
        for(int neigh:adj[node])
        { //check for the neighbour
            if(!visited[neigh])
            { 
                //if not visited then push into stack
                q.push(neigh);
                visited[neigh]=true;
            }
        }
       
    }
 }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(isConnected[i][j]==1)
               {//undirected graph and all iteration i.e we are checking
                 adj[i].push_back(j);
                adj[j].push_back(i);
               }
            }
        }
        //it will check for the element and in the index box whether it is visited or not 
        vector<bool>visited(n,false);
        //it will track the count 
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
              count++;
              bfs(adj,i,visited);
            }
        }
        return count;
    }
};
