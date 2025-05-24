# Kadane’s Algorithm

## Problem
Find the maximum sum subarray in a given integer array.

## Pattern
Dynamic Programming / Sliding Window approach to find the max sum contiguous subarray.

## When to use
- Maximum subarray sum problems.
- Problems involving continuous segments.

## Algorithm Steps
1. Initialize two variables: `max_ending_here = 0` and `max_so_far = -∞`.
2. Iterate over the array:
   - Update `max_ending_here = max(arr[i], max_ending_here + arr[i])`.
      - Update `max_so_far = max(max_so_far, max_ending_here)`.
      3. Return `max_so_far`.

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
                                      