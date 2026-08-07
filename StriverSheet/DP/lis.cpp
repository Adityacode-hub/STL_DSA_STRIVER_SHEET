#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>& a, int index, int prev_index)
{
  
    if(index == a.size())
        return 0;

    
    int notTake = solve(a, index + 1, prev_index);

    int take = 0;

    if(prev_index == -1 || a[index] > a[prev_index])
    {
        take = 1 + solve(a, index + 1, index);
    }

    return max(take, notTake);
}

int main()
{
    vector<int> a = {3,10,2,20};

    cout << solve(a, 0, -1);

    return 0;
}