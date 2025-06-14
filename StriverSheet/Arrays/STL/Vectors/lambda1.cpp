#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5;
    [=]()->void{cout<<a<<" "<<b;}();//refernce by copy ,auto can be used in place of void
    return 0;
}

