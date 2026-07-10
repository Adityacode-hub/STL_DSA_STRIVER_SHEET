#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:

    int jump(int i, vector<int>& stones)
    {
        int n = stones.size();

        // Base Case
        if (i == n - 1)
        {
            return 0;
        }

        // One Jump
        int onejump = INT_MAX;
        if (i + 1 < n)
        {
            onejump = abs(stones[i + 1] - stones[i]) + jump(i + 1, stones);
        }

        // Two Jump
        int twojump = INT_MAX;
        if (i + 2 < n)
        {
            twojump = abs(stones[i + 2] - stones[i]) + jump(i + 2, stones);
        }

        return min(onejump, twojump);
    }

    int frogJump(vector<int>& stones)
    {
        return jump(0, stones);
    }
};

int main()
{
    Solution s;

    vector<int> stones = {10,30,40,20};

    cout << s.frogJump(stones);
}