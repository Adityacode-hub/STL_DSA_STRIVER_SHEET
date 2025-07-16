#include<iostream>
using namespace std;
 main()
 {
    int a,b,c,d;
    cout<<"enter the  four numbers";
    cin>>a>>b>>c>>d;
   int x=a>b?a:b;
   int y=c>d?c:d;
   int result=(x>y)?x:y;
   cout<<"greatest:-"<<result;



 }