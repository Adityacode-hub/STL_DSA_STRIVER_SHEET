#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
if((n & (n-1))==0)
{
    cout<<"power of two"<<endl;
}
else if((n & (n-1))>0)
{
    cout<<"not the power of two"<<endl;
}
}