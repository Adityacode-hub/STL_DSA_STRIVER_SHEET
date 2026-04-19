#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    bool dfs(vector<vector<char>>& board, string &word, int i, int j, int index) {

        //  base case
        if(index == word.length())
            return true;

        //  invalid cases
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() 
           || board[i][j] != word[index])
            return false;

        //  mark visited
        char temp = board[i][j];
        board[i][j] = '#';

        // 🔁 explore 4 directions (up down left and right) if it is found in any one of the direction then return the true as per the requirement
        //evry time i have to check evry direction at once then backtrack it  that why we need the another variable i.e found
        
        //dfs depth first search
//different four direction of the board
        bool found = dfs(board, word, i+1, j, index+1) ||
                     dfs(board, word, i-1, j, index+1) ||
                     dfs(board, word, i, j+1, index+1) ||
                     dfs(board, word, i, j-1, index+1);

        //  backtrack 
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                // 🔍 start DFS only if first char matches
                if(board[i][j] == word[0] && dfs(board, word, i, j, 0)) //from the one index we will go to the rest 
                     {
                    return true;
                }
            }
        }

        return false;
    }
};