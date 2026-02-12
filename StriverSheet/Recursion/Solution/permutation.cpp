class Solution
{
    public :
    int way(int arr[],int m,int sum)
    {
        int ans=0;
        for(int i=0;i<m;i++)
        {
            arr+=way(arr,m,sum-arr[i]);
            return ans;
        }
    }
     int countways(int arr[],int m ,int n)
     {
        return way(arr,m,n);
     }
};