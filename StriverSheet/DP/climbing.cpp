#include<iostream>
#include<vector>
using namespace std;
int solve(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int stepone=solve(n-1);
    int steptwo=solve(n-2);
    return stepone+steptwo;

}
int main()
{

}

//which value is changing i.e n we will memoize for the repeating steps
//n=[45] so we will make a dp of size 46