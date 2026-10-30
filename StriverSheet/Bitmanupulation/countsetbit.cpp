#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        if((n & 1)>0)
        {
           count++;
        }
       n=n>>1;//har baar ek right shift kar denge 
    }
    cout<<count; //it will give the count for the following 
}