#include<iostream>
#include<vector>
using namespace std;
class StockSpanner {
public:
vector<int> nums;
    StockSpanner() 
    {
        
    }
    int next(int price) 
    {
      nums.push_back(price);
      int len=nums.size();
      int i=len-1;
      int count=1;
      //bs left to right trace karna h
      for(int j=i-1;j>=0;j--)
      {
        if(nums[j]>nums[i])
        {
            break;
        }
        count++;
      }
        return count;
    }
};