#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(low<=high)
        {
            int guess=(low+high)/2;
            int totalweight=0;
            int count=1;
        for(int i=0;i<weights.size();i++)
       {
        if(totalweight+weights[i]<=guess)
        {
            totalweight+=weights[i];
        }
        else
        {//when we did not get anything equal to guess then count increase karo
             count++;
             totalweight=weights[i];
        }
       }
       if(count>days)
       {
        low=guess+1;
       }
       else{
        ans=guess;
        high=guess-1;
       }
    }
    return ans;
        }
};