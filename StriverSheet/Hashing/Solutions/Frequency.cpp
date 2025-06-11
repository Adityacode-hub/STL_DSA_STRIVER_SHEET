// problem number (1838 of leetcode frequency of the most frequent element)
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution
{
    public :
    int maxFrequency(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int maxFreq = 0;

    for (int i = 0; i < k; i++) {
        freq[nums[i]]++;
        maxFreq = max(maxFreq, freq[nums[i]]);
    }

    return maxFreq;
}

};
int main() {
    Solution s;
    vector<int> nums = {1, 4, 4, 2, 1, 4};
    int k=nums.size();
    cout << s.maxFrequency(nums,k);  // Output: 3 (because 4 appears 3 times)
    return 0;
}

