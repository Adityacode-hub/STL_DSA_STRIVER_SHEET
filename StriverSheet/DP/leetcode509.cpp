//fibonacci number
//memoization depends on the nummber of variables
#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int>dp;
int fib(int n)
{
 if(n==0 ||n==1)//lowest possible value of the param
 {
    return 1;
 }   
if(dp.find(n)!=dp.end())
{
    return dp[n];
}
int a1=fib(n-1);
int a2=fib(n-2);
int ans=a1+a2;
 dp[n]=ans;
return ans;
}
int main()
{
int k=2;
cout<<fib(k);
return 0;
}