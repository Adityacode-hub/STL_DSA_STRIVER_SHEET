#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    int insertionsort(vector<int>&arr)
    {
        int i,j,temp;
        for(int i=1;i<arr.size();i++)
        {
           temp=arr[i];
           for(int j=i-1;j>=0;j--)
           {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;//jaha if condition fail huaa wahi pe chor denge
            }
           }
        }
        arr[j+1]=temp;//because j=-1 and -1 and +1 =0 so index 0 would be 18
    }
};

int main()
{
    Solution s;
    vector<int>s={4,1,3,9,7};

}