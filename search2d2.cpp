#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        sort(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            
            for(int j=0;j<matrix[i].size();j++)
            {
                // sort(matrix.begin(),matrix.end());
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<vector<int>>result={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int targeted=5;
    bool res=s.searchMatrix(result,targeted);
    cout<<res;
    return 0;
}