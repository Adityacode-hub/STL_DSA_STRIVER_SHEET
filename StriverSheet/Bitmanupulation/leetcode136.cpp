#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>container(n);
    for(int i=0;i<n;i++)
    {
       cin>>container[i];

    }
   int result=0;
    for(int index=0;index<n;index++)
    {
          result= result ^ container[index];
       

    }
    cout<<result<<endl;

}