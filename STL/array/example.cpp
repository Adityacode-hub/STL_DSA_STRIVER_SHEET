#include<iostream>
#include<array>
using namespace std;
 int main()
 {
    array<int ,3>a1={1,2,6};
    array<float,4> a2={2,3,4,5};
    array<int,3> a3=a1;
    cout<<a1[1]<<endl;
    cout<<a1.at(2)<<endl;
    //implicit iterator | range for loop
    for(int x : a1)//left side variable and right side container
      cout<<x<<" ";

    
    cout<<endl;

    array<int,3>::iterator it=a1.end();
    for(it=a1.end();it==a1.begin();it++)
    {
        cout<<*it;
    }
    return 0;


 }