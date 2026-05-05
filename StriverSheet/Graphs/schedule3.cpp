//cycle in  dfs in course scheuduling 

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
 bool isCycleDfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited,vector<bool>&inRecursion)
 {
    // u is the node to which we are working
    visited[u]=true;
    inRecursion[u]=true;
    for(int&v:adj[u])
    {
        //neighbour v not u  u is the node and v  is the neighbouring node is form u to v u move 
        if(!visited[v]&&isCycleDfs(adj,v,visited,inRecursion))
        {
            return true;
        }
        else if(inRecursion[v]==true)
        {
            return true;
        }
    }
    inRecursion[u]=false;//backtrack and make it false
    return false;

 }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<bool>visited(numCourses,false);
        vector<bool>inRecursion(numCourses,false);
        //making the graph
        for(auto&v:prerequisites)
        {
          int a=v[0];
          int b=v[1];
          //b --> a
          adj[b].push_back(a);
        }
    for(int i=0;i<numCourses;i++)
    {
        if(!visited[i]&&isCycleDfs(adj,i,visited,inRecursion))
        {
            return false ;//course can not be complited if isCycledfs value is false
        }
    
    }

      return true;  
    }
};