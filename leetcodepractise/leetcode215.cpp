class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++)
        {
           if(pq.size()<k)
           {

            pq.push(nums[i]);
           }
           else if(nums[i]>pq.top())
           {
            
            pq.pop();//top ka elemnt 
            pq.push(nums[i]);//then push krna h saath next elemnt

           }
           
        }
      return pq.top();
    }
};