#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int solve(int value, vector<int>& points, vector<int>& dp)
    {
       
        if(value >= points.size())
            return 0;

   
        if(dp[value] != -1)
            return dp[value];

       
        int take = points[value] + solve(value + 2, points, dp);

      
        int skip = solve(value + 1, points, dp);

        return dp[value] = max(take, skip);
    }

    int deleteAndEarn(vector<int>& nums)
    {
        if(nums.empty())
            return 0;

   
        int maxValue = *max_element(nums.begin(), nums.end());

        
        vector<int> points(maxValue + 1, 0);

        for(int x : nums)
            points[x] += x;

        vector<int> dp(maxValue + 1, -1);

        return solve(0, points, dp);
    }


//tabulation 
      int deleteAndEarn2(vector<int>& nums)
      {
        int maxValue=*max_element(nums.begin(),nums.end());
        vector<int>points(maxValue+1,0);
        for(int i:nums)
        {
            points[i]+=i;
        }
        int n=points.size();
        vector<int>dp(n+2,0);
        for(int value=n-1;value>=0;value--)
        {
            int take=points[value]+dp[value+2];
            int skip=dp[value+1];
            dp[value]=max(take,skip);
        }
        return dp[0];
      }
};

int main()
{
    Solution s;
    vector<int>n={3,4,2};
    cout<<s.deleteAndEarn(n);
}