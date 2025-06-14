#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<type_traits>
using namespace std;
void f1()
{
    vector<string>s1={"aditya","anuj","sritam","anshu","anamika"};
    vector<string>::reverse_iterator it;
    for(it=s1.rbegin();it!=s1.rend();it++)
    {
          cout<< *it<< " ";

    }
    // for (auto x:s1)
    // {
    //     cout<<x << " ";

    // }
    // cout<<endl;

}
void f2()
{
 list<string>s1={"aditya","anuj","sritam","anshu","anamika"};
 list<string>::reverse_iterator it;
 for(it=s1.rbegin();it!=s1.rend();it++)
    {
          cout<< *it<< " ";

    }

}
void f3()
{
    vector<int>v1={10,20,30,40,50,60,70,80,90,100};
    list<int>l;
    vector<int>::iterator it;
    for_each(v1.begin(),v1.end(),[&](int x){l.emplace_back(x);});
    for (int num : l)
        cout << num << " ";
    cout<<endl;
    if (std::is_same<decltype(l), std::list<int>>::value)
    cout << "l is a std::list<int>" << endl;

}
void f4()
{
    list<int> l1 = {10, 20, 30, 40, 50};
    list<int> l2;

    // Classic loop using iterator
    for (list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
        l2.push_back(*it);  // or l2.insert(l2.end(), *it);
    }

    // Print the copied list
    for (int num : l2)
        cout << num << " ";
if(is_same<decltype(l2),list<int>>::value)
{
    cout << "l is a std::list<int>" << endl;
}

}
int main()
{
    f4();
    return 0;
}