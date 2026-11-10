#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int>&nums,int target)
{
   int len=nums.size();
   int low=0;
   int high=len-1;
   while(low<=high)
   {
    int guess=(low+high)/2;//this is used for the guessing 
    if(nums[guess]==target)
    {
        return guess;
    }
    else if(nums[guess]<target)
    {
        low=guess+1;
    }
    else{
        high=guess-1;

    }
   }
   return -1;
}
int main()
{
    vector<int>a={-1,2,3,4,7,8,9,10,12};
    int temp=10;
    cout<<"found at index :- "<<fun(a,temp)<<endl;
}