#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

void f1()
{
    set<int>s1={20,40,30,10};
    set<int>s2;
for(auto x:s1)
{
    cout<<x<<"  ";
}
cout<<endl;
 set<int>::iterator it;
 for(it=s1.begin();it!=s1.end();it++)
 {
    cout<<*it<< " ";
 }
    cout<<endl;
    cout<<s1.count(10)<<endl;
    cout<<s2.empty()<<endl;
    s1.insert(90);
    s1.erase(90);
for(auto x:s1)
{
    cout<<x<<" ";
}
    
}

void f2()
{
    multiset<int>s1={10,20,30,20,40};
    multiset<int>s2;
    for(auto x:s1)
    {
        cout<<x<< " ";
    }
    cout<<endl;
    s1.insert(40);
    s1.erase(40); //it will delete all the occurances of the 40 or particular element
    for(auto x:s1)
    {
        cout<<x << " ";
    }
    cout<<endl;

//-----------------unordered set -------------------------//

unordered_set<int>s5={20,40,50,60};
for (auto x:s5)
{
    cout<<x << " ";

}
cout<<endl;
}

int main()
{
    f2();
    return 0;
}