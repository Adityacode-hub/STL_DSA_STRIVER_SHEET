#include<iostream>
#include<vector>
using namespace std;

void subsetsum(vector<int>& a,int index,int sum,
               vector<int>& ans)
{
    if(index == a.size())
    {
        ans.push_back(sum);
        return;
    }

    // Take
    subsetsum(a,index+1,sum + a[index],ans);

    // Not take
    subsetsum(a,index+1,sum,ans);
}

int main()
{
    vector<int> a = {3,4,5};
    vector<int> ans;

    subsetsum(a,0,0,ans);

    for(auto x : ans)
        cout << x << " ";
}
