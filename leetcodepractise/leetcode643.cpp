#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
     int n=nums.size();
     double avg=0;
     int p=n-k+1
     for(int i=0;i<k;i++)
     {
        sum+=nums[i];
     }    
     double avg=(double)sum/k;
    double maxAvg=avg;
    for(int i=0;i<p-1;i++)
    {
        sum=sum-nums[i]+nums[i+k];
        avg=(double)sum/k;
        if(avg>maxAvg)
        {
            maxAvg=avg;
        }
    }
    return maxAvg;
   
    }
};
