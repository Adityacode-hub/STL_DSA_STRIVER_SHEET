#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
    int n=nums.size();
      int low=0;
      int high=n-1;
      while(low<high)
      {
        int mid=(low+high)/2;//currently we check here
        if (arr[low] <= arr[high])
{
    return arr[low];
}

if (arr[mid] >= arr[low])
{
    low = mid + 1;
}
else
{
    high = mid;//it will not go out of bound 
}

      }
    }
};