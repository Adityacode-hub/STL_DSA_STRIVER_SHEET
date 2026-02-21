let n;
let board;
let ans;
function isSafe(row,col)
{
   //column check 
   for(let i=0;i<row;i++)
   {
    if(board[i][col]=='Q')
    {
        return false;
    }
   }
   //left diagonal check

 for (let i=row-1, j=col-1;
     i>=0 && j>=0;
     i--, j--)
{
   if(board[i][j] === 'Q')
       return false;
}
   //rigth diagonal check
for(let i=row-1, j=col+1;
    i>=0 && j<n;
    i--, j++)
{
    if(board[i][j] === 'Q')
        return false;
}
return true;
}

function solve(row)
{
    if(row==n)
    {
        ans.push(board.map(r=>r.join("")));
        return;
    }
    //fix the row try all column 
    for(let col=0;col<n;col++)
    {
        if(isSafe(row,col))
        {
            board[row][col]='Q';
            solve(row+1);
            board[row][col]='.';
        }
    }
}
function solveNQueen(N)
{
    n=N;
    board=Array(n).fill().map(()=>Array(n).fill('.'));
    ans=[];
    solve(0);
    return ans;
}
console.log(solveNQueen(4));