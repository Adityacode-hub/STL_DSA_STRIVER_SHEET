#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = (int)stalls[stalls.size() - 1] - stalls[0];
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canweplace(stalls, mid, k)) {
                ans = mid;         // Store last valid mid
                low = mid + 1;     // Try to find a bigger distance
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }

private:
bool canweplace(vector<int>& stalls, int dist, int k) {
    int count = 1;
    int last_pos = stalls[0];

    for (size_t i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last_pos >= dist) {
            count++;
            last_pos = stalls[i];
        }
        if (count >= k) return true;
    }
    return false;
}

};


int main() {
    Solution sol;
    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;
    cout << sol.aggressiveCows(stalls, cows);  // Output: 3
    return 0;
}
