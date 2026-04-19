#include<iostream>
#include<vector>
using namespace std;
void graph(vector<vector<int>>edges,int edg)
{
    vector<vector<int>>q(edg,vector<int>(edg,0));
    {
        for(int i=0;i<edges.size();i++)
        {

           vector<int>edge=edges[i];//each edge is one vector {{0,1},{0,2},{1,2},{1,3},{2,3}}
           //this contains two things first is source and destination
           //destination par 
           int src=edge[0];//index first
           int dest=edge[1];//index second 
            q[src][dest]=1;
            q[dest][src]=1;//beacuse it is undirected graph so  destination to source has also connection i.e two way
    }
    for(auto x:q)
    {
        for(auto k:x)
        {
            cout<<k;
        }
        cout<<endl;
    }
}
}
int main()
{
vector<vector<int>>edges={{0,1},{1,2},{2,3}};
int n=4;
graph(edges,n);
return 0;
}