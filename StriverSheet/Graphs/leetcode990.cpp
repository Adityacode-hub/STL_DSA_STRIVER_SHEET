#include<iostream>
#include<vector>
using namespace std;
//simple yaar humko parent se match karna h that's it

class Solution {
public:

    // ultimate parent find karne ke liye
    int findparent(int v, vector<int>& parent)
    {//parent {-1,-1,-1,-1,-1.....}
        // agar khud leader hai
        //index  se element ko check karega ki -1 h ya nahi else next element receive push karega
        if(parent[v] == -1)
        {
            return v;
        }

        // warna parent ka leader dhoondo
        return findparent(parent[v], parent);
    }

    bool equationsPossible(vector<string>& equations) 
    {
        // a-z ke liye DSU
        vector<int> parent(26, -1);

        int node = equations.size();

        // PASS 1
        // sirf == wali equations ko union karo
        for(int i = 0; i < node; i++)
        {
            if(equations[i][1] == '=')
            {//next next element choose krne ke leaa i ka use kiya 
                int u = equations[i][0] - 'a';
                int v = equations[i][3] - 'a';
//required element h check krna h
                int pu = findparent(u, parent);
                int pv = findparent(v, parent);

                // agar alag sets me hain
                // toh union karo
                if(pu != pv)
                {
                    parent[pu] = pv;
                }
            }
        }

        // PASS 2
        // != wali equations check karo
        for(int i = 0; i < node; i++)
        {
            if(equations[i][1] == '!')
            {
                //kis index pe jana h ya h abhi
                //this is simple equation 
                int u = equations[i][0] - 'a';
                int v = equations[i][3] - 'a';
              //ultimate leader to decide parent
                int pu = findparent(u, parent);
                int pv = findparent(v, parent);

                // same parent but inequality
                // contradiction
                if(pu == pv)
                {
                    return false;
                }
            }
        }

        return true;
    }
};