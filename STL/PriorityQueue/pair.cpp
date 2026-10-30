#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1={1,2};
    pair<int,char>p2={2,'a'};
    cout<<"pair p1"<<p1.first<<" "<<p1.second<<endl;
    cout<<"pair p2"<<p2.first<<" "<<p2.second<<endl;
    pair<int,pair<int,char>>p3={1,{2,'a'}};
    cout<<"pair p3:"<<p3.first<<" "<<" "<<p3.second.first<<p3.second.second<<endl;
}