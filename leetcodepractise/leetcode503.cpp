#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//this is the brute force approach to solve the problem
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
      int leng=nums.size();
      stack<int>st;
      vector<int>answer(leng,-1);
      for(int i=0;i<leng;i++)
      {
             for(int j=1;j<leng;j++)
             {
              int p=(i+j)%leng;
              if(nums[p]>nums[i])
              {
                answer[i]=nums[p];
                break;

              }
             }
      }   
      return answer;
    }
};
