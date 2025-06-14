#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());//making the result array of same size nums
        int posIndex = 0;  // even positions
        int negIndex = 1;  // odd positions

        for (int num : nums) {
            if (num >= 0) {
                result[posIndex] = num;
                posIndex += 2;
            } else {
                result[negIndex] = num;
                negIndex += 2;
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<int>nums={3,1,-2,-5,2,-4};
    vector<int>result=s.rearrangeArray(nums);
    for(auto num:result)
    {
        cout<<num;
    }
   

    return 0;
}