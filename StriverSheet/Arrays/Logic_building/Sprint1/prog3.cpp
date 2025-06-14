#include<iostream>
using namespace std;
string reverse(string s)
{
    int length=s.size();
    int l=0;
    int r=length-1;
    char temp;
    while(l<r)
    {
        temp;
       temp=s[l];
       s[l]=s[r];
       s[r]=temp;
       l++;
       r--;
    }
    return s;
 }
 int main()
 {
    string s;
    cout<<"enter the string:-";
    cin>>s;
    cout<<"the reversed string would be:-";
    cout<<reverse(s);
    return 0;
 }