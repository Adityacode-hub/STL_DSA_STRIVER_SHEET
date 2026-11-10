#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int result=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<nums[mid+1])
            {
               low=guess+1;   
            }
            else{
                result=guess;
                high=guess-1;
            }
        }
        return result;
    }
};