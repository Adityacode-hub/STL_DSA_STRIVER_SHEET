#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end)
{
    vector<int> temp(end - start + 1);

    int i = start;//left array is from the start
    int j = mid + 1;//rigth will start from the mid+1
    int index = 0;

    // Merge both halves
    while(i <= mid && j <= end)//first array ka last aur second array ka first
    {
        if(arr[i] <= arr[j])
            temp[index++] = arr[i++];
        else
            temp[index++] = arr[j++];
    }

    // Leftover left half if still have element remained
    while(i <= mid)
        temp[index++] = arr[i++];

    // Leftover right half if still have4 the element
    while(j <= end)
        temp[index++] = arr[j++];

    // Copy back to original array
    for(int k = 0; k < temp.size(); k++)
        arr[start + k] = temp[k];
}

void mergesort(vector<int>& arr, int start, int end)
{
    if(start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    vector<int> arr = {8, 3, 5, 2, 9, 1};

    cout << "Original Array:\n";
    for(int x : arr)
        cout << x << " ";

    mergesort(arr, 0, arr.size() - 1);

    cout << "\n\nSorted Array:\n";
    for(int x : arr)
        cout << x << " ";

    return 0;
}
