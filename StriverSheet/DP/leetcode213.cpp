#include<iostream>
#include<vector>
using namespace std;
int rob(vector<int>&nums)
{
    int n=nums.size();
    if(n==1)
    {
        return nums[0];
    }
    vector<int>t(n+1);
    //t[i]=money stolen when you have i houses
    t[0]=0;
    //case-1 (take 1st house -hence skip the last house)
    for(int i=1;i<=n-1;i++)
    {
        int skip=t[i-1];
        int take=num[i-1]+((i-2)>=0?t[i-2]:0);
        t[i]=max(skip,take);
    }
    int result1=t[n-1];
    t.clear();
    t[0]=0;
    t[1]=0;
    for(int i=2;i<=n;i++)
    {
        int skip=t[i-1];
        int take=nums[i-1]+((i-2>=0)?t[i-2]:0);
        t[i]=max(skip,take);
    }
    int result2=t[n];
    return max(result1,result2);
}
int main()
{

}