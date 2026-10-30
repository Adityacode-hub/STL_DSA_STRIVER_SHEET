#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int count = 0;

        for (int r1 = 0; r1 < n; r1++) {
            for (int c1 = 0; c1 < m; c1++) {
                for (int r2 = r1; r2 < n; r2++) {
                    for (int c2 = c1; c2 < m; c2++) {

                        int sum = 0;

                        for (int i = r1; i <= r2; i++) {
                            for (int j = c1; j <= c2; j++) {
                                sum += matrix[i][j];
                            }
                        }

                        if (sum == target) {
                            count++;
                        }
                    }
                }
            }
        }

        return count;
    }
};
 int main()
 {
    
 }