#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pairWithMaxSum(vector<int>& arr) {
        if (arr.size() < 2) return -1; // Not enough elements for a pair

        int maxSum = arr[0] + arr[1];

        for (int i = 1; i < arr.size() - 1; i++) {
            int pairSum = arr[i] + arr[i + 1];
            maxSum = max(maxSum, pairSum);
        }

        return maxSum;
    }
};


int main() 
{
    Solution s;
    vector<int> nums = {4,3,1,5,6};
     cout<<s.pairWithMaxSum(nums);  // 
    return 0;
}
