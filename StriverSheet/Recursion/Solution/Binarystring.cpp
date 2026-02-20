#include<iostream>
#include<string>
using namespace std;
void solve(string curr,int n)
{
    if(curr.length()==n)
    {
        cout<<curr<<endl;
        return;
    }

    solve(curr+"0",n);//adding zero 0

    if(curr.empty() || curr.back()!='1') 
        solve(curr+"1",n);//adding 1
}

int main()
{
    int n=3;
    solve("",n);
}
