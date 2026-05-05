#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int m, n;

    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        // boundary + water check
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;

        // mark visited
        grid[i][j] = '0';

        // explore 4 directions left,right ,up and down
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();

        int islands = 0;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1') // land
                {
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }

        return islands;
    }
};

int main()
{
    vector<vector<char>> grid = {
        {'1','1','0','0'},
        {'1','1','0','0'},
        {'0','0','1','0'},
        {'0','0','0','1'}
    };

    Solution obj;
    cout << obj.numIslands(grid);

    return 0;
}