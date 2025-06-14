#include<iostream>
#include<string>
using namespace std;
void f1()
{
    string s="mysirg";
    cout<<s;
    cout<<endl;
}
void f2()
{
    string s="mysirg education private limited";
    string ::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;

string s3=s.substr(2,3);


// cout<<s3<<endl;
}
int main()
{
    // f1();
    f2();
    return 0;
}
