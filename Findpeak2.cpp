#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) 
    { bool ispeak=true;
       for(int i=0;i<mat.size();i++)
       {
        for(int j=0;j<mat[i].size();j++)
        {
         
        if(i > 0 && mat[i][j] <= mat[i-1][j])
        {
                    ispeak = false;
        }

        if(i < mat.size() - 1 && mat[i][j] <= mat[i+1][j])  // ✅ Fix i+1 check
        {
                    ispeak = false;
        }

        if(j > 0 && mat[i][j] <= mat[i][j-1])
        {
                    ispeak = false;
        }

        if(j < mat[i].size() - 1 && mat[i][j] <= mat[i][j+1]) 
        
         {
                    ispeak = false;
         }
        if(ispeak)
        {
            return{i,j};
        }
        }
        

       }  
       return {-1,-1};  
    }
};
int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}
    };
    vector<int> res = sol.findPeakGrid(mat);
    cout << "Peak found at: [" << res[0] << ", " << res[1] << "]" << endl;
}
