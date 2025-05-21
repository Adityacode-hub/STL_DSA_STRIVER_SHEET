#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f1()
{
    vector<int>v1={1,3,4,5,6};
    vector<int>::iterator it;
    // cout<<v1[0]<<endl;
    //  cout<<v1[1]<<endl;
    //   cout<<v1[2]<<endl;
    //    cout<<v1[3]<<endl;
    //     cout<<v1[4]<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    
    

}
 void f2()
 {
    vector<float>v1={1.2f,3.5f,5.5f,2.4f,4.4f};
    // cout<<v1.at(0)<<endl;
    // cout<<v1.at(1)<<endl;
    // cout<<v1.at(2)<<endl;
    // cout<<v1.at(3)<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<< " ";

    }
    cout<<endl;
 }

void f3()
{
 vector<string>s1={"aditya","anuj","amit","manu","manish"};
 for(auto x :s1)
 {
    cout<<x<<" ";
 }
}
 void f4()
 {
    vector<int>v1={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<< *it << "  ";
    }
    
    cout<<it-v1.begin();

    cout<<endl;
 }
vector<int>q5()
{
    vector<int>num={20,50,10,30,40,60};
    vector<int>v2;
    vector<int>::iterator it;
    for(it=num.begin()+1;it!=num.end()-1;it++)
    {
     
        if(*it<*(it-1)&& *it<*(it+1))
           {
            num.push_back(*it);
           }
    }
    return num;
}
 int main()
 {
    f2();
    // f3();
    // f4();
vector<int>v2;
v2=q5();
for(auto x :v2)
    cout<<x<<" ";
cout<<endl;
return 0;
 }