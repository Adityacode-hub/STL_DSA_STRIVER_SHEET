#include<iostream>
#include<vector>
using namespace std;

int fun(vector<int>&a,int n,int i,int k)
{
    if(i==n)
    {
        return 0;
    }
    if(k==0)
    {
        return 0;
    }
    if(k==2)//buy
    {
        int c1=fun(a,n,i+1,k-1)-a[i];
        int c2=fun(a,n,i+1,k);
        return max(c1,c2);
    }
    else//sell
    {
        int c1=fun(a,n,i+1,k-1)+a[i];
        int c2=fun(a,n,i+1,k);
        return max(c1,c2);
    }

}

int stock(vector<int>&a)
{
    int n=a.size();
    int k=2;
    int gain=fun(a,n,0,k);
    return gain;

}
int main()
{

}
















