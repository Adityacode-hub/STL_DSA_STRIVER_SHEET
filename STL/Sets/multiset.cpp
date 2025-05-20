#include<iostream>
#include<set>
using namespace std;

 void f2()
 {
    multiset<int>m1={10,20,20,30,40};
    for(auto x:m1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
 }

 void f3()
 {
    multiset<int>m2={20,30,40,50,50};
    multiset<int>::iterator it;
    m2.erase(m2.begin(),m2.find(50));//it will find the 50 and less than 50  and then remove all
    for(it=m2.begin();it!=m2.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
 }
int main()
{
    // f2();
    f3();
    return 0;

}