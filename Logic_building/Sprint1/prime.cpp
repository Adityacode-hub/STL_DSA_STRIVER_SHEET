#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:-";
    cin>>n;
    // for(i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {break;}

    // }
    // if(i==n)
    // {
    //     cout<<"prime";
    // }
    // else
    // {
    //     cout<<"not prime";
    // }
    int s=sqrt(n);
    for(int i=2;i<=s;i++)
    {
        if(n%i==0)
         break;


    }
    if(i==s+1)
        {
            cout<<"prime";
        }
        else{
            cout<<"not prime";
        }
    }



// agar 100=2*50,4*25,5*20 here we are increasing a and decreasing b i.e i.e if we are chaking with a no need to check with b
// point we will get a== b i.e like 10*10 we have to stop there sqrt(100)=10 i.e and b must be equal i==sqrt(10) i.e 10=10 then stop