#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void p5()
{
    array <int,10> a1={29,60,92,48,77,16,8,36,52,83};
    sort(a1.begin(),a1.end());
    for(auto x:a1)//rather than i=0;i<10;i++
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    p5();
    cout<<endl;
    return 0;
}