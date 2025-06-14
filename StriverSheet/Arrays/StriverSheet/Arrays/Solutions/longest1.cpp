#include<iostream>
#include<vector>
using namespace std;
class Solution
{ public:
    int longestSubarray(vector<int>&arr,int k)
    {
        int left=0;
        int right=0;
        int sum=0;
        int maxlen=0;
        while(right<arr.size())
        {
            sum+=arr[right];
        }
        while(sum>k&& left<=right)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
    }
};
int main()
{
    Solution s;
    int k=-5;
    vector<int> nums = {-5,8,-4,2,4,12};
    cout<<s.longestSubarray(nums,k);
    return 0;
}