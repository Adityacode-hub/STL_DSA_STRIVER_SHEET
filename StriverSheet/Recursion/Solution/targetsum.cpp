#include<iostream>
#include<vector>
using namespace std;

void targetsum(vector<int>& a,int index,
               int sum,int target,
               vector<int>& temp)
{
    if(index == a.size())
    {
        if(sum == target)
        {
            for(auto x : temp)
                cout << x << " ";
            cout << endl;
        }
        return;
    }

    // Take
    temp.push_back(a[index]);
    targetsum(a,index+1,sum + a[index],target,temp);

    // Backtrack
    temp.pop_back();

    // Not take
    targetsum(a,index+1,sum,target,temp);
}

int main()
{
    vector<int> a = {3,4,5};
    int target = 7;

    vector<int> temp;

    targetsum(a,0,0,target,temp);
}
