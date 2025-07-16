#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
class Solutions
{
    public:
    int findPages(vector<int>& arr, int n, int m) 
    {
    
        if (m > n) return -1;

        int low = *max_element(arr.begin(), arr.end()); // Minimum possible max (one book per student)
        int high = accumulate(arr.begin(), arr.end(), 0); // Max possible sum (all books to one)

        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

        
            int studentCount = 1;
            int pagesSum = 0;

            for (int i = 0; i < n; i++) {
                if (pagesSum + arr[i] <= mid) {
                    pagesSum += arr[i];
                } else {
                    studentCount++;
                    pagesSum = arr[i];
                }
            }

            if (studentCount <= m) {
                result = mid;       
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
int main() {
    Solutions obj;
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;
    cout << obj.findPages(arr, n, m);  
    return 0;
}
