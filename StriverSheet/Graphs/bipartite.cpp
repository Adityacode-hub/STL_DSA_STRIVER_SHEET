#include<iostream>
#include<unordered_map>
using namespace std;
class Solution
{
    public:
       bool checkbipartite(vector<int>&adj[],int curr ,vector<int>&color,int currentcolor)
       {
        color[curr]=currentcolor;
        for(int &v:adj[curr])
        {
            if(color[v]==color[curr])
            {
                return false;//same color aa gaya 
            }
            if(color[v]==-1)
            {
                int colorofv=1-currentcolor;//adjacent should be not sa
                if(checkbipartite(adj,v,color,colorofv)==false)
                  return false;
            }
        }
        return true;
       }
       bool isBipartite(int v,vector<int>adj[])
       {
        vector<int>color(v,-1);//no node is coloured
         for(int i =0;i<v;i++)
         {
            if(color[i]==-1)
            {
               if (checkbipartite(adj,i,color,1)==false)//current color is 1
               {
                   return false;
               }
            }
            return true;
         }
       }
}