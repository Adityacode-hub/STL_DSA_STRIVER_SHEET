#include<iostream>
#include<vector>
#include<cstring>
//this the top to bottom approach

using namespace std;

class Solution
{ 
public:
    int t[46];

    int solve(int n)
    {
        if(n < 0)
            return 0;

        if(n == 0)
            return 1;

        if(t[n] != -1)
            return t[n];

        int onestep = solve(n - 1);
        int twostep = solve(n - 2);

        return t[n] = onestep + twostep;
    }

    int climbingstairs(int n)
    {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};

int main()
{
    Solution s;
    int n = 5;
    cout << s.climbingstairs(n);
}