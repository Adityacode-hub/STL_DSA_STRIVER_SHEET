#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low=*max_element(weights.begin(),weights.end());
       int high=accumulate(weights.begin(),weights.end(),0);
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(findday(weights,days,mid))
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }

       }
       return low;
    }
    
private:
  bool findday(vector<int>&weights,int days,int capacity)
  { int currentday=1;
    int load=0;
    for(int weight:weights)
    {
        if(load+weight>capacity)
        {
            currentday++;
            load=0;
        }
        load+=weight;
    }
 return currentday<=days;
  }
 
};



//weights = [1,2,3,4,5,6,7,8,9,10], days = 5 capacity=15 on day 5th the  loadafter becomes 15 so u can send all the weight on day 15
// it will return 5,15 on day 5 the capacity will be 15 and you can transfer it
 