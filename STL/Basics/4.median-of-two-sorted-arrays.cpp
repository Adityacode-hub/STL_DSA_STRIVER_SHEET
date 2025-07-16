#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.reserve(nums1.size() + nums2.size());

        for (int num : nums1) merged.push_back(num);
        for (int num : nums2) merged.push_back(num);

        sort(merged.begin(), merged.end());

        int total = merged.size();
        if (total % 2 == 0) {
            return (merged[total/2 - 1] + merged[total/2]) / 2.0;
        } else {
            return merged[total/2];
        }
    }
};

int main() {
    Solution sol;

    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {3, 4, 5};

    double median = sol.findMedianSortedArrays(arr1, arr2);
    cout << "Median: " << median << endl;

    return 0;
}
