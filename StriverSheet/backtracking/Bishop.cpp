//n placement of the bishoptouh
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int n;
    vector<vector<int>> board;

    void printBoard() {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<board[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }

    bool isValid(int row,int col) {

        // Top-left
        int i=row-1, j=col-1;
        while(i>=0 && j>=0){
            if(board[i][j]==1) return false;
            i--; j--;
        }

        // Top-right
        i=row-1; j=col+1;
        while(i>=0 && j<n){
            if(board[i][j]==1) return false;
            i--; j++;
        }

        // Bottom-left
        i=row+1; j=col-1;
        while(i<n && j>=0){
            if(board[i][j]==1) return false;
            i++; j--;
        }

        // Bottom-right
        i=row+1; j=col+1;
        while(i<n && j<n){
            if(board[i][j]==1) return false;
            i++; j++;
        }

        return true;
    }

    void solve(int row) {

        if(row == n){
            printBoard();
            return;
        }

        for(int col=0; col<n; col++){

            if(isValid(row,col)){

                board[row][col] = 1;//track it

                solve(row+1);//recursive

                board[row][col] = 0; // backtrack
            }
        }
    }
};

int main() {

    Solution obj;
    obj.n = 5;

    obj.board = vector<vector<int>>(obj.n,
                                    vector<int>(obj.n,0));

    obj.solve(0);

    return 0;
}