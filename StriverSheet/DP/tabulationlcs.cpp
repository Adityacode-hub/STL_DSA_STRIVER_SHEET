#include<iostream>
#include<vector>
using namespace std;

int longestcommonsubsequence(string text1,string text2)
{
    int n=text1.size();
    int m=text2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    //because ith state i+1 and j+1 pe dependent h so
    for(int i=n-1;i>=0;i--)
    {
        for(int  j=m-1;j>=0;j--)
        {
            if(text1[i]==text2[j])
            {
                dp[i][j]=1+dp[i+1][i+j];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];

}
int main()
{
    string text1="abcde";
    string text2="abc";
    cout<<longestcommonsubsequence(text1,text2);
    return 0;
}