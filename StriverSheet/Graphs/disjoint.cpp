#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;
//we can do to detect cycle
//this is basically find  and union
class Solution
{
public:

    // ultimate parent find karne ke liye
    int findParent(int node, vector<int>& parent)
    {
        // agar -1 hai matlab ye leader hai
        if(parent[node] == -1)
        {
            return node;
        }

        // warna parent ke parent ko dhoondo
        //{1,2,-1}
        //parent[node]==-1 parent[0]==-1 false
        //parent[1]==2 false
        //parent[2]==-1 mil gaya then it will return 2nd node
        //this is the recursive call to find the parent and its parent
        return findParent(parent[node], parent);
    }

    
    bool isCycle(int V, vector<vector<int>>& edges)
    {
        // initially sab alag sets me hain
        vector<int> parent(V, -1);

        // har edge traverse karo
        for(auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];

            // dono ka ultimate parent nikalo
            //representative of the parent 
            int pu = findParent(u, parent);
            int pv = findParent(v, parent);

            // agar same parent hai -> cycle
            if(pu == pv)
            {
                return true;
            }

            // warna union kar do
            //insert kar do i.e kisi ek ko parent bana do
            parent[pu] = pv;
        }

        return false;
    }
};