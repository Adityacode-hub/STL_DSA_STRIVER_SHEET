#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution
{
    public:
     int firstUniqueChar(string s)
     {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]]==1)
            {
                return i;
                //index return karna h
            }
        }
        return -1;
     }
}
