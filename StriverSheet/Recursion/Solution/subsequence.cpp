#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void subsequence(vector<int>& arr,
                     int index,
                     vector<int>& temp,//initialising with the empty one
                     vector<vector<int>>& ans)
    {
      
      if(index==arr.size())
      {
        ans.push_back(temp);
        return;
      }
      temp.push_back(arr[index]);
      subsequence(arr,index+1,temp,ans);
      temp.pop_back();
      subsequence(arr,index+1,temp,ans);
    }
};

int main()
{
    vector<int> arr = {1,2,3};

    vector<vector<int>> ans;
    vector<int> temp;

    Solution obj;
    obj.subsequence(arr, 0, temp, ans);

    // Print all subsequences
    for(auto &v : ans)
    {
        cout << "{ ";
        for(int x : v)
            cout << x << " ";
        cout << "}\n";
    }
}
