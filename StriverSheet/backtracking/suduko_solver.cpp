#include <vector>
using namespace std;

class Solution {
public:

    // 🔹 Check if placing num at (row,col) is safe
    bool isSafe(vector<vector<char>>& board, int row, int col, char num)
    {
        // Row check
        for(int j = 0; j < 9; j++)
        {
            if(board[row][j] == num)
                return false;
        }

        // Column check
        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == num)
                return false;
        }

        // Subgrid check
        int start_row = (row / 3) * 3;
        int start_col = (col / 3) * 3;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[start_row + i][start_col + j] == num)
                    return false;
            }
        }

        return true;
    }


   
    bool solve(vector<vector<char>>& board)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                // Find empty cell
                if(board[i][j] == '.')
                {
                    // Try numbers 1–9
                    for(char num = '1'; num <= '9'; num++)
                    {
                        if(isSafe(board, i, j, num))
                        {
                            board[i][j] = num;   // place

                            if(solve(board))     // recurse
                                return true;

                            board[i][j] = '.';   // undo
                        }
                    }

                    return false; // no number worked → backtrack
                }
            }
        }

        return true; // board solved
    }


    // 🔹 Driver (given by LeetCode)
    void solveSudoku(vector<vector<char>>& board)
    {
        solve(board);
    }
};

int main()
{
    vector<vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        
    };

    Solution obj;
    obj.solveSudoku(board);

    // print board
}

