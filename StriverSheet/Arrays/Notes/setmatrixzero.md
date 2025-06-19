leetcode problem number 73 

simple problem first find out the length then we will see for the zero then set all to 1 then we will check for if i,j i.e row --> and column  | is visited=1 then set 0 if visited 

CODE(c++)
```cpp
{ int m=matrix.size();
   int n=matrix[0].size();
      vector<int>row(m,0);
      vector<int>column(n,0);
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                row[i]=1;
                column[j]=1;
            }
        }
      }
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(row[i]==1||column[j]==1)
            {
                matrix[i][j]=0;
            }
        }
      }

    }