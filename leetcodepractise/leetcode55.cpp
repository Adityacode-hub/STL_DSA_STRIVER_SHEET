class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
     int l=nums.size();
     int reach=0;
     for(int i=0;i<l;i++)
     {
       if(reach<i)
       {
        return false;
       }
       reach=max(reach,i+nums[i]);
       if(reach>=l-1)
       {
        return true;
       }
     }  
     return false;  
    }
};