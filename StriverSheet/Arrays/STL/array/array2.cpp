#include<iostream>
#include<array>
#include<math.h>
using namespace std;
int main()
{
//  array<int,5> a1={1,2,3,4,5};
//  array<int,5>::reverse_iterator rit;
// for(rit=a1.rbegin();rit!=a1.rend();rit++)
//     {
//         cout<<*rit<<endl;

//     }

// array<float,5>a1={1.5,2.5,3.5,4.5,6.5};
// array<float,5>::iterator it;
// float sum=0;
// for(it=a1.begin();it!=a1.end();it++)
// {
//     cout<<*it<<endl;
//     sum=sum+*it;
// }
// cout<<a1.size()<<endl;
// float average=sum/a1.size();
// cout<<"Average "<<average<<endl;


array<int,10> a1={};
array<int,10>::iterator it;
for(it=a1.begin();it!=a1.end();it++)
{
    cin>>*it;

}
for(it=a1.begin();it!=a1.end();it++)
{
    cout<<*it<<endl;
}
return 0;

};