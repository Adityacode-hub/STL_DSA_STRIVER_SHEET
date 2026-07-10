#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
long long maxAlternatingSum(vector<int>& nums)
{
    int n = nums.size();

    vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        // isEven = true
        dp[i][1] = max(
            dp[i + 1][1],
            nums[i] + dp[i + 1][0]
        );

        // isEven = false
        dp[i][0] = max(
            dp[i + 1][0],
            -nums[i] + dp[i + 1][1]
        );
    }

    return dp[0][1];
}
};
int main()
{
    Solution s;
    vector<int>a={1,4,2,3};
   cout<< s.maxAlternatingSum(a);
}