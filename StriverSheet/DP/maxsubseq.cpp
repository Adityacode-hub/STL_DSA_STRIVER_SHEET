#include<iostream>
#include<vector>
using namespace std;
class Solution
{ 
public:
long long solve(int i,bool plus,vector<int>&nums)
{
    int n=nums.size();
    if(i>=n)
    {
        return 0;
    }
    long long take;
    if(plus)//first time true huaa then use karega
    {
         take=nums[i]+solve(i+1,false,nums);
    }
    else{
         take=-nums[i]+solve(i+1,true,nums);
    }
    long long skip=solve(i+1,plus,nums);
    return max(take,skip);
}
long long maxAlternatingSum(vector<int>& nums)
{
   
    return solve(0,true,nums);
}


long long maxAlternatingSum2(vector<int>& nums)
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
//memoization depend on the dependent state

int main()
{
    Solution s;
    vector<int>a={4,2,3,5};
    cout<<s.maxAlternatingSum2(a);
}