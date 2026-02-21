#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int n;
    vector<vector<string>> ans;
    vector<string> board;

    // ---------------- SAFETY ----------------
    bool isSafe(int row,int col)
    {
        // Column check
        for(int i=0;i<row;i++)
        {
            if(board[i][col]=='Q')
                return false;
        }

        // Left diagonal ↖
        int i=row-1;
        int j=col-1;

        while(i>=0 && j>=0)
        {
            if(board[i][j]=='Q')
                return false;

            i--;
            j--;
        }

        // Right diagonal ↗
        i=row-1;
        j=col+1;

        while(i>=0 && j<n)
        {
            if(board[i][j]=='Q')
                return false;

            i--;//up 
            j++;//down  i.e up +down
        }

        return true;
    }

    // ---------------- BACKTRACK ----------------
    void solve(int row)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }

        for(int col=0;col<n;col++)
        {
            if(isSafe(row,col))
            {
                board[row][col]='Q';   // place

                solve(row+1);          // recurse

                board[row][col]='.';   // backtrack
            }
        }
    }

    // ---------------- DRIVER ----------------
    vector<vector<string>> solveNQueen(int N)
    {
        n=N;

        board = vector<string>(n, string(n,'.'));

        solve(0);

        return ans;
    }
};

// ---------------- MAIN -------------------
int main()
{
    Solution obj;
    int n=4;

    vector<vector<string>> res=obj.solveNQueen(n);

    for(auto &board:res)
    {
        for(auto &row:board)
            cout<<row<<endl;

        cout<<"---------"<<endl;
    }
}

//here we have to make a 1d string and storing string in each string=row

//"...."
// "...."
// "...."
// "...."


// ['.','.','.','.']

//board[i][j] there i will give the string and j will give the index

//array of string we have to create not an array of array