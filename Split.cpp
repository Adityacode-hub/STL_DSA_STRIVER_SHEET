#include<iostream>
#include<vector>
#include<algorithm>
// #include<cmath>
#include<climits>
using namespace std;
    class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long minLargestSum = LLONG_MAX;
        for (int i = 1; i < n; ++i) { 
            long long leftSum = 0, rightSum = 0;
            for (int j = 0; j < i; ++j) leftSum += nums[j];
            for (int j = i; j < n; ++j) rightSum += nums[j];
            long long maxPartSum = max(leftSum, rightSum);
            minLargestSum = min(minLargestSum, maxPartSum);
        }

        return (int)minLargestSum;
    }
};
int main()
{
    Solution s;
        vector<int>num={44,22,33,11,1};
    int k=5;
    int result=s.splitArray(num,k);
    cout<<result;
    return 0;
}
