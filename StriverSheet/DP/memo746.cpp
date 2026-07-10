#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int solve(int i, vector<int>& cost, vector<int>& dp)
    {
        int n = cost.size();

        if(i >= n)
            return 0;

        if(dp[i] != -1)
            return dp[i];

        int oneJump = cost[i] + solve(i + 1, cost, dp);

        int twoJump = cost[i] + solve(i + 2, cost, dp);

        return dp[i] = min(oneJump, twoJump);
    }

    int minCostClimbingStairs(vector<int>& cost)
    {
        int n = cost.size();

        vector<int> dp(n, -1);

        return min(solve(0, cost, dp), solve(1, cost, dp));
    }
};

int main()
{
    Solution s;

    vector<int> a = {5,2,4};

    cout << s.minCostClimbingStairs(a);
}