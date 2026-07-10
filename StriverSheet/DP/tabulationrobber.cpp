#include<iostream>
#include<vector>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int robLinear(vector<int>& nums, int start, int end)
    {
        int n = nums.size();

        // +2 because we access dp[i+2]
        vector<int> dp(n + 2, 0);

        // Fill from right to left
        for (int i = end; i >= start; i--)
        {
            int take = nums[i] + dp[i + 2];
            int skip = dp[i + 1];

            dp[i] = max(take, skip);
        }

        return dp[start];
    }

    int rob(vector<int>& nums)
    {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        int case1 = robLinear(nums, 0, n - 2);
        int case2 = robLinear(nums, 1, n - 1);

        return max(case1, case2);
    }
};

int main()
{
    Solution s;

    vector<int> nums = {2,3,2};

    cout << s.rob(nums);

    return 0;
}