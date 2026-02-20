#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[end]);
    return i+1;
}

void quicksort(vector<int>& arr, int start, int end)
{
    if(start >= end)
        return;

    int p = partition(arr, start, end);//partion in two halves 

    quicksort(arr, start, p-1);//one half smaller than pivot
    quicksort(arr, p+1, end);//one half greater than the pivot
}

int main()
{
    vector<int> arr = {8,3,5,2,9,1};

    quicksort(arr, 0, arr.size()-1);

    for(int x : arr)
        cout << x << " ";
}
