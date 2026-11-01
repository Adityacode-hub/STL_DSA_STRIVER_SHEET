#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len=temperatures.size();
        stack<int>st;
        vector<int>answer(len,0);
        for(int i=0;i<len;i++)
        {
                     int current=temperatures[i];
                   while(!st.empty()&&temperatures[st.top()]<current)
                   {
                       int idx=st.top();
                       st.pop();
                       int wait=i-idx;
                       answer[idx]=wait;    
                   }
                   st.push(i);

        }
        return answer;
    }
};