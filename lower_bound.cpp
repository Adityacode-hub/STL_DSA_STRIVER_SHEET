#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findFloor(vector<int>& arr, int x) 
    {
        int low = 0, high = arr.size() - 1;
        int index = -1;

        while (low <= high) 
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) 
            {
                return mid; // Exact match is best floor
            }

            else if (arr[mid] < x) 
            {
                index = mid;    // potential floor index
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return index; // -1 if no floor found
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 6, 8, 10, 11, 13, 15};
    int x = 12;

    int index = sol.findFloor(arr, x);
    if (index != -1)
        cout << "Floor of " << x << " is " << arr[index] << " at index " << index << endl;
    else
        cout << "No floor found for " << x << endl;

    return 0;
}
