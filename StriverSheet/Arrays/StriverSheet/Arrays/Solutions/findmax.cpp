// #include<iostream>
// #include<vector>
// using namespace std;
// class solution
// {
//     public:
//     void findMaxConsecutiveOnes(vector<int>& nums)
//     {
//           int l=0;
//           int right=nums.size()-1;
//           int lcount=0;
//           int rcount=0;
//           while(l<=right)
//           {
//             if(nums[l]==nums[l+1]|| nums[right]==nums[right-1])
//             {
//                 lcount+=1;
//                 rcount+=1;
//             }
//               l++;
//               right--;
//         }
//  cout<<lcount<<endl;
//  cout<<rcount<<endl;
// }
// };
// int main()
// {
//     solution s;
//     vector<int>nums={1,1,0,1,1,1};
//     s.findMaxConsecutiveOnes(nums);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

class solution {
public:
    void findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int right = nums.size() - 1;

        int lcount = 0, lmax = 0;
        int rcount = 0, rmax = 0;

        while (l <= right) {
            // Left pointer logic
            if (nums[l] == 1) {
                lcount++;
                lmax = max(lmax, lcount);
            } else {
                lcount = 0;
            }

            // Right pointer logic
            if (nums[right] == 1) {
                rcount++;
                rmax = max(rmax, rcount);
            } else {
                rcount = 0;
            }

            l++;
            right--;
        }

        cout << "Max Consecutive 1s (using your logic): " << max(lmax, rmax) << endl;
    }
};

int main() {
    solution s;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    s.findMaxConsecutiveOnes(nums);
    return 0;
}
