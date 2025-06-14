#include<iostream>
#include<string>
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
 bool palindrome(string s)
{
    string reversed=reverse(s);
    return s==reversed;
}

 int main()
 {
    string s;
    cout<<"enter a string:- ";
    cin>>s;
  if(palindrome(s))
  {
    cout<<"palindrome"<<endl;

  }
  else{
    cout<<"not palindrome"<<endl;
  }
    return 0;
 }
 