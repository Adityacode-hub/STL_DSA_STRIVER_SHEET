Max Score from Subarray Mins

BUGS:- i was unable to solve the problem because i was unable to understand the question itself.

## code(c++)
  ```cpp
      { if (arr.size() < 2) return -1; // Not enough elements for a pair

        int maxSum = arr[0] + arr[1];

        for (int i = 1; i < arr.size() - 1; i++) {
            int pairSum = arr[i] + arr[i + 1];
            maxSum = max(maxSum, pairSum);
        }

        return maxSum;
    }

## always think about the edge cases and try to solve the edge case where it will fail. 