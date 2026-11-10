#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n=s.length();
        int k=t.length();
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int>st;
        unordered_map<char,int>txt; 
        for(int i=0;i<n;i++)
         {
             st[s[i]]++;
             txt[t[i]]++;
        
         }
         for(int i=0;i<k;i++)
         {
           
            if(st[t[i]]!=txt[t[i]])
            {
                return false;
            }
         }
         return true;
    }
};