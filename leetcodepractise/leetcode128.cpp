#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size();//size of an array
        //here we are using kyun ki mere ko yaad rakhna h element ko
        unordered_map<int,bool>mp;//this is the mp 
        for(int num:nums)
        {
            mp[num]=true;
        }
       int longest=0;
       for(int num:nums)
       {
        if(mp.find(num-1)==mp.end())//agar nahi h toh check karo ki element h ya nahi
        {
            int current=num;
            int count=1;
            while(mp.find(current+1)!=mp.end())
            {
                current++;//current
                count++;//count 
            }
            longest=max(longest,count);
        }
       }
     return longest;
        
    }
};
int main()
{
    Solution s;
    vector<int>number={9,1,4,7,3,2,10};
    cout<<s.longestConsecutive(number);
    
}
//this is the BRUTE FORCE APPROACH

