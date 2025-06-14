#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,5>a1={50,40,10,70,60};
    array<int,5>:: reverse_iterator rit;
    for(rit=a1.rbegin();rit!=a1.rend();rit++)
    {
        cout<<*rit<<endl;

    }
    array<int,5>:: const_reverse_iterator it;
    for(it=a1.rbegin();it!=a1.crend();it++)
    {
        cout<<*it<< " ";
    }
    cout<<*a1.data();
} // namespace std;

