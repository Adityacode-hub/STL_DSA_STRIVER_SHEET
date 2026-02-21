                          





                          (i,j)

      j →
   0   1   2   3
i ┌───┬───┬───┬───┐
0 │ S │ 1 │ 0 │ 1 │
  ├───┼───┼───┼───┤
1 │ 1 │ 1 │ 1 │ 1 │
  ├───┼───┼───┼───┤
2 │ 0 │ 1 │ 0 │ 1 │
  ├───┼───┼───┼───┤
3 │ 1 │ 1 │ 1 │ E │
  └───┴───┴───┴───┘
↓
i




| Move  | Direction | i change | j change |
| ----- | --------- | -------- | -------- |
| Down  | ↓         | i + 1    | j        |
| Up    | ↑         | i − 1    | j        |
| Right | →         | i        | j + 1    |
| Left  | ←         | i        | j − 1    |

Row (i) → Vertical movement
Col (j) → Horizontal movement

```cpp
// Down
solve(i+1, j);

// Left
solve(i, j-1);

// Right
solve(i, j+1);

// Up
solve(i-1, j);


if(i>=0 && j>=0 && i<n && j<n &&
   maze[i][j]==1 && !visited[i][j])




   Down  → i+1
Up    → i-1
Right → j+1
Left  → j-1


simple we can make the 2-d vector of the same size to track the element and mark it as visited or not

n=mat.size();
the same as the size of the matrix



vector<vector<bool>> vis(
        n,                  // number of rows
        vector<bool>(       // each row is a vector
            n,              // number of columns
            true            // initial value
        )
);

or simple we can reassign the value to the matrix on the matrix we are working at

the thing is  simple we have found the base case

1. mat[r][c]==0
     return
2. if(r<0&&c<0||r>n&&c>n||mat[r][c]==0)
      return
3. if(r==n-1 && c==n-1)
    return

now to track the 
mat[r][c]=-1 //initially

void helper(vector<vector<int>>&mat,int r,int c,vector<string>&ans,string temp)
{ int n=mat.size();
    if(r<0&&c<0||r>n&&c>n||mat[r][c]==0)
      return;
    if(r==n-1 && c==n-1)
    ans.push_back(temp);
    return;
    mat[r][c]=-1;
     helper(mat,r-1,c,ans,temp+"U");//up
    helper(mat,r+1,c,ans,temp+"D");//Down
    helper(mat,r,c-1,ans,temp+"L");//left
    helper(mat,r,c+1,ans,temp+"R");//right
    mat[r][c]=1;

}

vector<string>findpath(vector<vector<int>>&mat)
{
    int n=mat.size();
    vector<string>ans;
    vector<vector<bool>>vis(n,vector<bool>(n,true));
    helper(mat,0,0,path,ans,visited);
}
