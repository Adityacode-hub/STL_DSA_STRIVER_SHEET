#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> result;

    void solve(int i, int j,
               vector<vector<int>>& m,
               int n,
               string temp)
    {
        // ❌ Stop if invalid
        if(i<0 || j<0 || i>=n || j>=n || m[i][j]==0)
        {
            return;
        }

        // ✅ Destination reached
        if(i==n-1 && j==n-1)
        {
            result.push_back(temp);
            return;
        }

        // Mark visited
        m[i][j] = 0;

       // Down
temp.push_back('D');
solve(i+1, j, m, n, temp);
temp.pop_back();

// Left
temp.push_back('L');
solve(i, j-1, m, n, temp);
temp.pop_back();

// Right
temp.push_back('R');
solve(i, j+1, m, n, temp);
temp.pop_back();

// Up
temp.push_back('U');
solve(i-1, j, m, n, temp);
temp.pop_back();
        // Unmark visited (Backtrack)
        m[i][j] = 1;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze)
    {
        int n = maze.size();

        if(maze[0][0] == 0) return {};

        string temp = "";

        solve(0, 0, maze, n, temp);

        return result;
    }
};