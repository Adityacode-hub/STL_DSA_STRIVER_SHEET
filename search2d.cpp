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
    vector<vector<int>>result={{1, 3, 5, 7},
    {2, 4, 6, 8},
    {0, 9, 10, 11}};
    int targeted=12;
    bool res=s.searchMatrix(result,targeted);
    cout<<res;
    return 0;
}