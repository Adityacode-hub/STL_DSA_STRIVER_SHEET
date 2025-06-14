#include<iostream>
#include<vector>
using namespace std;
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
     
//         int maxsum= INT16_MIN;
//         int maxret;
//         for(int i=0;i<nums.size();i++)
//         {       int sum=0;
//             for(int j=i;j<nums.size();j++)
//             {
//                 sum+=nums[j];
//                maxsum= max(maxsum,sum);
//             }
          
//         }
//         return maxsum;
//         // return nums[nums.size()];
//     }
// };
class Solution
{
    public:
     int subArray(vector<int>&nums)
     {
        int currentsum=nums[0];
        int maxsum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            currentsum=max(nums[i],currentsum+nums[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
     }
};
int main() 
{
    Solution s;
    vector<int> nums = {5,4,-1,7,8};
    cout<< s.subArray(nums);  // Sort in-place

   
    return 0;
}
