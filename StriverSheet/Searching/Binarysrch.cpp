
//it is used in the non increasing and non decreasing order when the data is in sorted form
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int target,int start,int end)
{
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        return 1;
    }
   else if(arr[mid]<target)
    {
      //start=mid+1
      //return binaryseearch(arr,target,start,end);
        return binarysearch(arr,target,mid+1,end);
    }
    else
    {
    
        return binarysearch(arr,target,start,mid-1);
    }

}
int main()
{
    vector<int>a={3,8,11,15,20,22};
    int target=15;
    int start=0;
    int end=a.size()-1;
    int x=binarysearch(a,target,start,end);
    cout<<x<<endl;
    return 0;
}
