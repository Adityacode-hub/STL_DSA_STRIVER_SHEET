Kadane’s Algorithm
Problem
Find the maximum sum subarray in a given integer array.

Pattern
Dynamic Programming / Sliding Window approach to find the max sum contiguous subarray.

When to use
Maximum subarray sum problems.
Problems involving continuous segments.
Algorithm Steps
Initialize two variables: max_ending_here = 0 and max_so_far = -∞.
Iterate over the array:
Update max_ending_here = max(arr[i], max_ending_here + arr[i]).

Update max_so_far = max(max_so_far, max_ending_here).
Return max_so_far.
Go from left to right.

At each element, you ask:

“Should I continue with the current subarray, or start fresh from here?”

We use two variables:

currentSum: the current running sum

maxSum: the maximum sum found so far

  ## Code (C++)

  ```cpp
  int maxSubArray(vector<int>& nums) {
      int max_ending_here = 0, max_so_far = INT_MIN;
          for (int x : nums) {
                  max_ending_here = max(x, max_ending_here + x);
                          max_so_far = max(max_so_far, max_ending_here);
                              }
                                  return max_so_far;
                                  }
ANOTHER APPROACH
                     ```cpp
                      int currentSum = nums[0];  // Start from first element
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);  // Continue or start fresh
        maxSum = max(maxSum, currentSum);  // Update max if needed
    }

    return maxSum;
}