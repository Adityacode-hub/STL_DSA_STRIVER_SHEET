//botton up approach
#include<iostream>
#include<vector>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    vector<int>dp(n+1,-1);//[-1,-1,-1,-1] it will initalise the number with this 
    //dp[i] ith fibb number
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
        //dp[2]=dp[1]+dp[0];
        //simple way is make a tree diagram 
        //dp mei array list v banao
    }
    return dp[n];
}
int main()
{
    int k=2;
    cout<<fib(2);
    return 0;
}