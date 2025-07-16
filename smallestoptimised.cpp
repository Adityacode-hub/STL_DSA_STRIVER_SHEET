#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = 0;

            for (int num : nums) {
                sum += ceil((double)num / mid);
            }

            if (sum <= threshold) {
                answer = mid;        // possible answer, try smaller
                high = mid - 1;
            } else {
                low = mid + 1;       // need larger divisor
            }
        }

        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {44, 22, 33, 11, 1};
    int threshold = 5;
    int result = sol.smallestDivisor(nums, threshold);
    cout << result << endl;  // ✅ Should print 44
    return 0;
}
