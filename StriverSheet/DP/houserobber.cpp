#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>nums,int i)
{
    if(i>nums.size())
    {
        return 0;
    }
    int choose=nums[i]+solve(nums,i+2);
    int notchoose=solve(nums,i+1);
    return max(choose,notchoose);
}
int houserobber(vector<int>nums,int i)
{
    return solve(nums,i);
}
int main()
{
    vector<int>a={1,2,3,1};
   cout<< houserobber(a,0);
   return 0;


}
