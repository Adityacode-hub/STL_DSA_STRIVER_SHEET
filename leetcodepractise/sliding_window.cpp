#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution
{
    public:
      int slidingwindow(vector<int>&nums,int target)
      {
       int n=nums.size();
       int sum=0;
       for(int right=0;right<n;right++)
       {
               sum+=nums[right];
               int minlength=INT_MAX;
               while(sum>=target)
               {
                     minlength=min(minlength,right-left+1);
                     sum-=nums[left];
                     left++;

               }
       }

      }
}
int main()
{
  Solution s;
  vector<int>k={9,1,4,7,3,2,1,10};
  int tar=7;
  cout<<s.slidingwindow(k,tar);

}