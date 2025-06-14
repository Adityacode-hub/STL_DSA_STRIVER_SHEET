#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
          set<int>c;
         for(int i=0;i<a.size();i++)
         {
             c.insert(a[i]);
         }
         for(int i=0;i<b.size();i++)
         {
             c.insert(b[i]);
         }
         vector<int>result (c.begin(),c.end());
         return result;
    }
};