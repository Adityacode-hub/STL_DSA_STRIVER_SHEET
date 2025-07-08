#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
       vector<int> searchInsert(vector<int>& nums, int target)
       { int floor=-1;
        int ceil=-1;
         int low=0;
         int high=nums.size()-1;
         while(low<=high)
         { int mid=(low+high)/2;
           if(nums[mid]==target)
           {
           floor=ceil= nums[mid];
           break;
           }
           else if(nums[mid]<target)
           {
                 floor=nums[mid];
                 low=mid+1;
                 
        }
         else
         { ceil=nums[mid];
            high=mid-1;

         }
         }
        return{floor,ceil}; 
       }

};
int main() {
    Solution sol;
    vector<int> nums = {10, 20, 30, 40, 50};
    int target;

    cout << "Enter the target: ";
    cin >> target;

    vector<int> result = sol.searchInsert(nums, target);

    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;

    return 0;
}