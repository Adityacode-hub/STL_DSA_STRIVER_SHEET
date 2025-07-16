#include <iostream>
#include <vector>
#include<algorithm>
#include<math.h>
using namespace std;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold)
    {
       
        int max=*max_element(nums.begin(),nums.end());// here we would get the maximum elemnet here 
        for(int j=1;j<=max;j++)
        {
             int length=nums.size();
            int sum=0;//reset the value of the sum everytime.
           int i=0;
            while(length>0)
            {
                sum+=ceil((double)nums[i]/j);
              i++;
                length--;
            }
          
            
         if(sum<=threshold)
         {
            return j;
         }
        }
        return max;
    }
};
int main()
{
    Solution sol;
    vector<int>num={44,22,33,11,1};
    int threshold=5;
    int result=sol.smallestDivisor(num,threshold);
    cout<<result;
    return 0;
}

//now we have to reduce the time complexity of this code
