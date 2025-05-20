#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//  struct 
//  {
//     void operator()(int x) //functor
//     {
//         cout<<x<<endl;
//     }
//  }something;
//  [](int x){cout<<x}

void example6()
{
    vector<int>v={10,20,30,40,50};
    for_each(v.begin(),v.end(), [](int x){cout<<x<< " ";});
}
int main()
{
    example6();
    return 0;
}