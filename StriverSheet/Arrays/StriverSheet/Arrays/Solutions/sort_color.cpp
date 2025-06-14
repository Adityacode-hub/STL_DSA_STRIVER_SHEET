#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    int temp;
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
         
            }
          
        }
       
    }
};
int main() 
{
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
     s.sortColors(nums);  // Sort in-place

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
