#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
 bool checkbipartitebfs(vector<vector<int>>& adj,int curr,vector<int>&color,int currcolor)
 {
    queue<int>q;
    q.push(curr);
    //color of  current node
    color[curr]=currcolor;
    while(!q.empty())
    {//yeh current h  node ke leaa h 
     int u=q.front();
     q.pop();
     //node ke neighbour pe jaoo aur usko push karo taki wo v process ho 
     for(int&v:adj[u])
     {
       if(color[v]==color[u])//this is will be checking that would it be same 
       {
        return false;
       }
       else if(color[v]==-1)
       {//give either red or green
        color[v]=1-color[u];
        //push karenge
        q.push(v);
       }
     }   
    }
return true;
 }
    bool isBipartite(vector<vector<int>>& adj) 
    {
        int v=adj.size();
        //initally  take it as negative
        vector<int>color(v,-1);
        //red=1;
        //green=0;
          for(int i=0;i<v;i++)
          {
             if(color[i]==-1)
             {//initially it will be 1
                if (checkbipartitebfs(adj,i,color,1)==false)
                {
                    return false;
                }
             }
          }   
          return true;
    }
};