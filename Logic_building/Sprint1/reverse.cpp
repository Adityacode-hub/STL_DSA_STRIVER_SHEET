#include<iostream>
using namespace std;
int main()

{
    int n,x=0,k,count=0,lock=1;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        k=n%10; //it will give the remainder
        if(k==0&&lock)
        {
            count++;
        }
        else{
            lock=0;
            x=x*10+k;
            n=n/10;//it will give the quotient i.e remained number
        }
        while(count--)
        {
            cout<<'0';
        }
        cout<<x;

    }
    return 0;
}