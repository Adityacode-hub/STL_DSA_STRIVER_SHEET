#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    map<int,string>m1={{1,"aditya"},{2,"anuj"},{3,"amit"},{4,"bhumi"}};
    for(auto x:m1)
    {
         cout<<x.first << "   "<<x.second<<endl;
    }
}