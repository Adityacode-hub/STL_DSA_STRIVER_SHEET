#include<iostream>
#include<vector>
using namespace std;
//this is the brute force 
long long ans = 0;

long long solve(vector<int>& temp)
{
    long long sum = 0;

    for(int i = 0; i < temp.size(); i++)
    {
        if(i % 2 == 0)
            sum += temp[i];
        else
            sum -= temp[i];
    }

    return sum;
}

void subsequence(int i, vector<int>& nums, vector<int>& temp)
{
    int n = nums.size();

    if(i >= n)
    {
        ans = max(ans, solve(temp));
        return;
    }

    // Take
    temp.push_back(nums[i]);
    subsequence(i + 1, nums, temp);

    // Backtrack
    temp.pop_back();

    // Skip
    subsequence(i + 1, nums, temp);
}

int main()
{
    vector<int> nums = {4,2,5,3};
    vector<int> temp;

    subsequence(0, nums, temp);

    cout << ans;
}