#include<iostream>
#include<unordered_map>
using namespace std;
int fun(int i,int n)
{
    unordered_map<int,int>dp;
    if (i==n)
    {
        return 1;
    }
    if(i>n)
    {
        return 0;
    }
    if(dp.find(i)!=dp.end())
    {
        return dp[i];//when the element was not found
    }
   int a1=fun(i+1,n);
   int a2=fun(i+2,n);
   int ans=a1+a2;
   dp[i]=ans;
   return ans;
}
int main()
{
    
}