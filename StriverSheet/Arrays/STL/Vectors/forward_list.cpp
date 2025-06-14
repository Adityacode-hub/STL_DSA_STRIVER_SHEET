#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f1={15,30,68,42,28};
    forward_list <int> f2,f3;
    f2.assign({6,12,34,55});
    f3.assign(4,20);
    //implicit iterator

    for(auto x:f1)
    {
        cout<<x << " ";
    }
    cout<<endl;

    //explicit iterator
 forward_list<int> ::iterator it;
 for(it=f1.begin();it!=f1.end();it++)
 {
    cout<<*it<< " ";
 }
 cout<<endl;

//  for(it=f1.before_begin();it!=f1.end();it++)
//  {
//     cout<<*it <<" ";

//  }
//  cout<<endl;

f1.pop_front();
f1.push_front(10);
for(auto x:f1)
{
    cout<<x<<" ";
}
cout<<endl;
f1.insert_after(f1.before_begin(),5);
for(auto x:f1)
{
    cout<<x<<" ";
}
cout<<endl;

}