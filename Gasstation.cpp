
//Brute force approach
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution
{
public:
  double findSmallestMaxDist(vector<int> &stations, int k) 
{vector<double>gap;

 for(int i=0;i<stations.size()-1;i++)
 {
    double result=stations[i+1]-stations[i];//it is basically for finding the gap between the 
    gap.push_back(result);
 }
 for(int i=0;i<k;i++)
 {
    auto it=max_element(gap.begin(),gap.end());//here it will find the max element 
    double element= *it; // here we have used the pointer to point the element 
    gap.erase(it);
    double split=element/2.0;
    gap.push_back(split);
    gap.push_back(split);



 }
  return *max_element(gap.begin(), gap.end());
        
}
};
int main()
{
    Solution s;
    vector<int> stations = {1, 5, 10, 20};
int k = 4;

cout << s.findSmallestMaxDist(stations, k);


}
// rather than writing vector<double>::iterator it ,auto it is the best option;


