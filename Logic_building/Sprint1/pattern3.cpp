#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    void insertionSort(vector<int>& arr) 
    { 
        for(int i=1;i<arr.size();i++)
        {
            int temp=arr[i];
            int j=i-1;
            for(;j>=0;j--)
            {
                if(arr[j]>temp)
                {
                    arr[j+1]=arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1]=temp;
        }
        
    }
};