#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

class Solution {
public:

    int splitArray(vector<int>& nums, int k)
    {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        // 3,6,2,8,4
        // Total sum = 23
        // Minimum possible maximum sum = 8

        while(low <= high)
        {
            int guess = (low + high) / 2;

            int count = no_of_sbuarray_with_max_sum_as_mid(nums, guess);

            if(count > k)
            {
                low = guess + 1;
            }
            else
            {
                ans = guess;
                high = guess - 1;
            }
        }

        return ans;
    }

    int no_of_sbuarray_with_max_sum_as_mid(vector<int>& nums, int guess)
    {
        int sum = 0;
        int count = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            if(sum + nums[i] > guess)
            {
                sum = nums[i];
                count++;
            }
            else
            {
                sum += nums[i];
            }
        }

        return count;
    }
};