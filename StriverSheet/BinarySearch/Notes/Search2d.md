## 74. Search a 2D Matrix


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        sort(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }

            }
        }
        return false;
    }
};


//if(matrix[i][j]==target) this was the mistake that i have done the question but forgot to put matrix comparision row and column




matrix[0].size(); // = 3 → because row 0 is {1, 2, 3} 
// matrix[i] is the element i.e first row it will check for 

