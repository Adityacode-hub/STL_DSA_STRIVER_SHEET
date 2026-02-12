#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void subsequence(vector<int>& arr,
                     int index,
                     vector<int>& temp,//initialising with the empty one
                     vector<vector<int>>& ans)
    {
      
      if(index==arr.size())//until we push all the element i.e if index=3 then push up to arr.size() i.e 3
      {
        ans.push_back(temp);//we are pushing evrything that is inside the temp to ans
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

    vector<vector<int>> ans;//to store in the new array formed
    vector<int> temp;//initialising the with the empty one 

    Solution obj;//class object
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


// | Iteration | v value |
// | --------- | ------- |
// | 1         | [1,2,3] |
// | 2         | [1,2]   |
// | 3         | [1]     |
// | …         | …       |


// for(int x : v)
// v = [1,2]

// Print "{ "
// x=1 → print 1
// x=2 → print 2
// Print "}"
