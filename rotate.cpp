#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findKRotation(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

           
            if (nums[mid] <= nums[high]) {
                high = mid;
            } else {
                // Smallest element must be to the right of mid
                low = mid + 1;
            }
        }

        // At the end of loop, low == high and points to the minimum element
        return low;  // Index of smallest element = Number of rotations
    }
};
