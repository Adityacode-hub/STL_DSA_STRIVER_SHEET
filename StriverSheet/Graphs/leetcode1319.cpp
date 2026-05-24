#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
int findparent(int n,vector<int>&parent)
 {
  
    if(connection[n]==-1)
    {
        return n;
    }
    return findparent(parent[n],parent);
 }

 int makeConnected(int n, vector<vector<int>>& connections) 
    {
        if(connections.size()<n-1)
        {
            return -1;
        }
          vector<int>parent(n,-1);
          int extraedges=0;
        for(int i=1;i<connections.size();i++)
        {
           int a=connections[i][0];
           int b=connections[i][1];
           int pu=findparent(a,parent);
           int pv=findparent(b,parent);   
           if(pu==pv)
           {
            extraedges++;
           }
           else{
            //parent is unequal then directly  add it 
            parent[pu]=pv;

           }
        }
        //component is zero then also add it 
       int components=0;
       for(int i=0;i<n;i++)
       {
        if(parent[i]==-1)
        {
            components++;

        }
       }
        return components -1;
    }
};