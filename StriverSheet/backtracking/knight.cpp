#include<iostream>
#include<vector>
using namespace std;

class Solutions
{
public:

    int n;
    vector<vector<int>> board;
    // ---------- VALID ----------
    bool valid(int row,int col)
    {
        if(row>=0 && row<n &&
           col>=0 && col<n &&
           board[row][col]==-1)
            return true;

        return false;
    }

    // ---------- SOLVER ----------
    bool solve(int row,int col,int moveCount)
    {
        //move count is used to track the move on which we are working 
        if(moveCount == n*n)
            return true;
            
        // 1
        if(valid(row+2,col+1))
        {
            board[row+2][col+1]=moveCount;

            if(solve(row+2,col+1,moveCount+1))
                return true;

            board[row+2][col+1]= -1;
        }

        // 2
        if(valid(row+2,col-1))
        {
            board[row+2][col-1]=moveCount;

            if(solve(row+2,col-1,moveCount+1))
                return true;

            board[row+2][col-1]= -1;
        }

        // 3
        if(valid(row-2,col+1))
        {
            board[row-2][col+1]=moveCount;

            if(solve(row-2,col+1,moveCount+1))
                return true;

            board[row-2][col+1]=-1;
        }

        // 4  
        if(valid(row-2,col-1))
        {
            board[row-2][col-1]=moveCount;

            if(solve(row-2,col-1,moveCount+1))
                return true;

            board[row-2][col-1]=-1;
        }

        // 5
        if(valid(row+1,col+2))
        {
            board[row+1][col+2]=moveCount;

            if(solve(row+1,col+2,moveCount+1))
                return true;

            board[row+1][col+2]=-1;
        }

        // 6
        if(valid(row+1,col-2))
        {
            board[row+1][col-2]=moveCount;

            if(solve(row+1,col-2,moveCount+1))
                return true;

            board[row+1][col-2]= -1;
        }

        // 7
        if(valid(row-1,col+2))
        {
            board[row-1][col+2]=moveCount;

            if(solve(row-1,col+2,moveCount+1))
                return true;

            board[row-1][col+2]=-1;
        }

        // 8
        if(valid(row-1,col-2))//true
        {
            board[row-1][col-2]=moveCount; //placecount there
             
            if(solve(row-1,col-2,moveCount+1))//mount count means next move number=2
                return true;

            board[row-1][col-2]=-1;
        }

        return false;
    }
};

int main()
{
    Solutions obj;
    obj.n=5;
    obj.board=vector<vector<int>>(5,vector<int>(5,-1));
    obj.board[0][0]=0;//always start from 0
    if(obj.solve(0,0,1))//start with row=0 and col=0 movecount=1
    {
        cout<<"Tour Found";

    }
    else{
        cout<<"No Tour";
    }
}