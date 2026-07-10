#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int solve(int i, int end, vector<int>& nums)
    {
        vector<int>dp(n+1);
        if (i > end)
            return 0;
        if(dp[i]!=-1)
        {
            return dp[i];
        }

        int take = nums[i] + solve(i + 2, end, nums);
        int skip = solve(i + 1, end, nums);

        return dp[i]= max(take, skip);
    }

    int rob(vector<int>& nums)
    {
        int n = nums.size();

        
        if (n == 1)
            return nums[0];
        vector<int> dp1(n, -1);
        int case1 = solve(0, n - 2, nums,dp1);
        vector<int>dp2(n,-1);
        int case2 = solve(1, n - 1, nums,dp2);

        return max(case1, case2);
    }
};
int main()
{
    Solution s;
    vector<int>a={2,3,2};
    cout<<s.rob(a);
}