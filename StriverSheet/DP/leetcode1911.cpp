#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
   long long solve(int i,bool isEven, vector<int>&nums)
   {
     if(i==nums.size())
     {
         return 0;
     }
     long long skip=solve(i+1,isEven,nums);
     long long take;
     if(isEven)
     {
        take=nums[i]+solve(i+1,false,nums);
     }
     else{
        take=-nums[i]+solve(i+1,true,nums);
     }
     return max(take,skip);
   }
    long long maxAlternatingSum(vector<int>& nums)
    {
       return solve(0,true,nums);

    }
  
};

int main()
{
    Solution S;
    vector<int>a={4,1,2,3};
    cout<<S.maxAlternatingSum(a);
}