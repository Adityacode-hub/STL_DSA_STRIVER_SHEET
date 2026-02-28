#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int n;
    vector<vector<int>> board;

    // ---------- VALID ----------
    bool isvalid(int row,int col)
    {
        return row>=0 && row<n &&
               col>=0 && col<n &&
               board[row][col]==-1;
    }

    // ---------- BACKTRACK ROOK ----------
    void move(int row,int col)
    {
        board[row][col] = 1;   // mark visited

        // RIGHT
        for(int c = col+1; c<n; c++)
        {
            if(isvalid(row,c))
            {
                board[row][c] = 1;
                move(row,c);
                board[row][c] = -1;   // backtrack
            }
        }

        // LEFT
        for(int c = col-1; c>=0; c--)
        {
            if(isvalid(row,c))
            {
                board[row][c] = 1;
                move(row,c);
                board[row][c] = -1;
            }
        }

        // DOWN
        for(int r = row+1; r<n; r++)
        {
            if(isvalid(r,col))
            {
                board[r][col] = 1;
                move(r,col);
                board[r][col] = -1;
            }
        }

        // UP
        for(int r = row-1; r>=0; r--)
        {
            if(isvalid(r,col))
            {
                board[r][col] = 1;
                move(r,col);
                board[r][col] = -1;
            }
        }
    }

    // ---------- PRINT ----------
    void printBoard()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    Solution obj;

    obj.n = 5;   // board size

    // initialize board with -1
    obj.board = vector<vector<int>>(obj.n,
                                   vector<int>(obj.n,-1));

    int startRow = 2;
    int startCol = 2;

    // run rook backtracking exploration
    obj.move(startRow,startCol);

    // print result
    obj.printBoard();

    return 0;
}