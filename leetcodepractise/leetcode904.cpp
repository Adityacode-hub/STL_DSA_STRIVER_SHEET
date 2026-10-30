#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int left=0;
        int maxlength=0;
        for(int right=0;right<n;right++)
        {
            mp[fruits[right]]++;
            while(mp.size()>2)
            {//shrink the window if more than two
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                {
                    mp.erase(fruits[left]);
                }
                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};
int main()
{
    Solution s;
    vector<int>a={1,2,1};
    cout<<s.totalFruit(a);
    
}