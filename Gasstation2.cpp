#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
       double low=0;
       double high=stations.back()-stations.front();
       double epsilon=1e-6;
       while(high-low>epsilon)
       {
        double mid=(low+high)/2.0;
        int required=countStationNeeded(stations,mid);
        if(required>k)
        {
              low=mid;
        }
        else{
            high=mid;
        }
       }
       return high;
        
    }
    private:
      int countStationNeeded(vector<int>&stations,double maxgap)
      {
        int count=0;
         for(int i=0;i<stations.size()-1;i++)
 {
      double gap=stations[i+1]-stations[i];//it is basically for finding the gap between the 
      count+=floor(gap/maxgap);
 }
 return count;
      }
};