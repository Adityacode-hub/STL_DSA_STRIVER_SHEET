#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={10,20,3,40,9};
    vector<int> v2;
    for(int i =0;i<=3;i++)
    {
        //[] no bound checking
        cout<<v1[i]<<" ";
    
    }
    cout<<endl;

    //implicit iterator

    for( auto x:v1){
        cout<<x<< " ";
    }
cout<<endl;
    //explicit iterator
    vector<int>::iterator it;
    it=v1.begin();
    cout<<*it;
cout<<endl;
v1.insert(v1.begin()+2,80);
// for(auto x:v1)
//     cout<<x<<" ";
// cout<<endl;
cout<<endl;
// v1.insert(v1.end()-1,80);
// cout<<endl;
// v1.emplace(v1.begin()+1,90);
// cout<<endl;
v1.erase(v1.begin()+1,v1.end()-1);
for(auto x:v1)
  cout<<x<<" ";
cout<<endl;
v2.insert(v2.begin(),v1.begin(),v1.end());
{
    for(auto x:v2)
    {
        cout<<x<<endl;
    }
}
return 0;
}