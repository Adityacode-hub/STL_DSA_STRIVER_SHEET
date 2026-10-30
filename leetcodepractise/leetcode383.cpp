#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int>m;
        unordered_map<char,int>r;
        for(int i=0;i<magazine.length();i++)
        {
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            r[ransomNote[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(m[ransomNote[i]]<r[ransomNote[i]])
            {

                 return false;
            }
            
        }
       return true;
    }
};