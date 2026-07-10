#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int solve(int i, vector<int>& cost)
    {
        int n = cost.size();

        if(i >= n)
            return 0;

        int oneJump = cost[i] + solve(i + 1, cost);

        int twoJump = cost[i] + solve(i + 2, cost);

        return min(oneJump, twoJump);
    }

    int minCostClimbingStairs(vector<int>& cost)
    {
        return min(solve(0, cost), solve(1, cost));
    }
};

int main()
{
    Solution s;

    vector<int> a = {5,2,4};

    cout << s.minCostClimbingStairs(a);
}