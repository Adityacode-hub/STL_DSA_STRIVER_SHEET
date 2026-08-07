#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
//brute force solution
int solve(vector<int>&nums)
{
    if(nums.empty())
    {
        return 0;
    }
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        int x=nums[i];
        vector<int>next;
        for(int j=0;j<nums.size();j++)
        {
            if(j==i)
            {
                continue;
            }
            if(nums[j]==x-1)
            {
                continue;
            }
            if(nums[j]==x+1)
            {
                continue;
            }
            next.push_back(nums[j]);
        }
        ans=max(ans,x+solve(next));
    }
    return ans;
}
    int deleteAndEarn(vector<int>& nums) 
    {
        return solve(nums);
    }
};
int main()
{
    Solution s;
    vector<int>a={4,2,3};
    cout<<s.deleteAndEarn(a);

}