
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while (low < high) {
            int mid = (low + high) / 2;
            if (canFinish(piles, h, mid)) {
                high = mid;  // try smaller speed
            } else {
                low = mid + 1;  // need faster speed
            }
        }
        return low;
    }
private:
    bool canFinish(vector<int>& piles, int h, int k) {
        int time = 0;
        for (int pile : piles) {
            time += (pile + k - 1) / k;  // ceil(pile / k)
        }
        return time <= h;
    }
};

int main() {
    Solution s;
    vector<int> piles = {3,6,7,11};
    int h = 8;
    cout << s.minEatingSpeed(piles, h) << endl;
    return 0;
}
