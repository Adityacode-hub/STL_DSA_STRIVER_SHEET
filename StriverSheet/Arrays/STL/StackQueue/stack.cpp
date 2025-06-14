// it has no iterator support
#include<iostream>
#include<stack>
#include<vector>
#include<deque>
using namespace std;

 void f1()
 {
    stack<int,vector<int>>s1;
    s1.push(55);
    s1.push(66);
    s1.push(99);
    s1.push(88);
   cout<<s1.top();
   cout<<endl;


 }
 int main()
 {
    f1();
    return 0;
 }

