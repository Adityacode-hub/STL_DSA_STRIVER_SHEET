//it is not random access iterator 
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1={10,20,30};
    //implicit iterator
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //explicit iterator
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    
    {
             cout<< *it<<" " ;

    }
    list<int>::iterator it1,it2;
    it1=l1.begin();
    it2=l1.end();
    l1.erase(++it1);
    l1.remove(20);
    for(auto x:l1)
    {
        cout<<*it;
    }

    cout<<endl;
        
}