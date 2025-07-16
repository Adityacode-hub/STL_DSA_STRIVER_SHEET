#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    void mergesort(int arr[],int start,int mid,int end)
    {
        vector<int>temp(end-start+1);
        int left=start,right=mid+1,index=0;
        while(left<=mid&& right<=end)
        {
           if(arr[left]<=arr[right])
           {
             temp[index]=arr[left];
            index++,left++;
           }
           else
           {
            temp[index]=arr[right];
            index++,right++;
           }
        }
    }
};
