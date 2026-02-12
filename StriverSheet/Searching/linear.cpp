//we will find at what index the element would be found
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>&arr,int target,int index)
{
if(index==arr.size())//agar pura iterate huaa
return 0;
if(arr[index]==target)
{
    return 1;
}
 return linearsearch(arr,target,index+1);//recursive appraoch
}

int main()
{
    vector<int>a={2,4,11,8,12};
    int index=0;
    int target=15;
    int answer=linearsearch(a,target,index);
    cout<<answer<<endl;
    return 0;
}