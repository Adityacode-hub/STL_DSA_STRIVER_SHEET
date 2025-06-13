#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count ;
        int i, j;
        bool flag;

        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size() - 1;) {
            count = 1;      
            flag = false;  

            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count += 1;
                    flag = true;
                } else {
                    break; 
                }
            }

            if (count == 1) {
                return nums[i]; 
            } else {
                i += count;  
            }
        }

      
        return nums[nums.size() - 1];
    }
};



int main() {
    Solution s;
    vector<int> nums = {2,2,1};
    cout<<s.singleNumber(nums);
    return 0;
}
