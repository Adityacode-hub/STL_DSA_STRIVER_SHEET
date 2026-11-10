#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> res;
    //jab empty nahi h toh result mei push 
        if(intervals.empty()) return res;
//sort karenge  
        sort(intervals.begin(), intervals.end());
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++)
        {//starting of the interval 
            int start2 = intervals[i][0];
            //end of the interval
            int end2 = intervals[i][1];

            if(end1 >= start2)
            {//max value of the end1
                end1 = max(end1, end2);
            }
            else
            {
                //it will push back to the result 
                res.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }
        }

        res.push_back({start1, end1});

        return res;
    }
};
int main()
{
    vector<vector<int>>s={{1,3},{2,5},{3,6},{9,12},{11,15}};
    vector<vector<int>>p=merge(s);
    for(auto x : p)
    {
        cout << "[" << x[0] << "," << x[1] << "]" << endl;
    }
}