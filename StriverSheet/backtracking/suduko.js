class Solution 
{

   
    isSafe(board, row, col, num) {

        // Row check
        for (let j = 0; j < 9; j++) {
            if (board[row][j] === num) {
                return false;
            }
        }

        // Column check
        for (let i = 0; i < 9; i++) {
            if (board[i][col] === num) {
                return false;
            }
        }

        // Subgrid check
        let startRow = Math.floor(row / 3) * 3;
        let startCol = Math.floor(col / 3) * 3;

        for (let i = 0; i < 3; i++) {
            for (let j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] === num) {
                    return false;
                }
            }
        }

        return true;
    }


    // 🔹 Backtracking solver
    solve(board) {

        for (let i = 0; i < 9; i++) {
            for (let j = 0; j < 9; j++) {

                // Find empty cell
                if (board[i][j] === '.') {

                    // Try numbers 1–9
                    for (let num = 1; num <= 9; num++) {

                        let charNum = num.toString();

                        if (this.isSafe(board, i, j, charNum)) {

                            board[i][j] = charNum;  // place

                            if (this.solve(board)) {
                                return true;
                            }

                            board[i][j] = '.';      // undo
                        }
                    }

                    return false; // backtrack
                }
            }
        }

        return true; // solved
    }


    // 🔹 Driver (LeetCode format)
    solveSudoku(board) {
        this.solve(board);
    }
}
