#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
// #include<functional>
using namespace std;
// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         vector<int>v;
//       
//         int sum=0;
//         for(int i=0;i<arr.size();i++)
//         {
//          sum+=arr[i];
//          v.push_back(arr[i]);
//          if(sum==k)
//          {
//             return v.size();
//          }  
//         }
//         return -1;

//     }

// };

// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         vector<int> v;
//         int sum = 0;
//         int maxlen=-1;

//         for (int i = 0; i < arr.size(); i++) {
//             sum = 0;
//             v.clear();

//             for (int j = i; j < arr.size(); j++) {
//                 sum += arr[j];
//                 v.push_back(arr[j]);
//                 if (sum == k) {
//                     maxlen=max(maxlen,(int)v.size())  ;// return length of valid subarray
//                 }
//             }
//         }

//         return maxlen; // if no subarray found
//     }
// };


class Solution {
public:
    int longestSubarray(vector<int>& arr, long long k) {
        map<long long, int> presumMap;
        long long sum = 0;
        int maxlen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Case 1: from beginning to current index
            if (sum == k) {
                maxlen = max(maxlen, i + 1);
            }

            // Case 2: sum - k seen before
            long long rem = sum - k;
            if (presumMap.find(rem) != presumMap.end()) {
                int len = i - presumMap[rem];
                maxlen = max(maxlen, len);
            }

            // Only insert the first occurrence of the sum
            if (presumMap.find(sum) == presumMap.end()) {
                presumMap[sum] = i;
            }
        }

        return maxlen;
    }
};

int main()
{
    Solution s;
    int k=-5;
    vector<int> nums = {-5,8,-4,2,4,12};
    cout<<s.longestSubarray(nums,k);
    return 0;
}