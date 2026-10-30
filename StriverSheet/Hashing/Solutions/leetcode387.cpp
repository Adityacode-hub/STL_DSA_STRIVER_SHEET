#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s)
    {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]]==1)//in the hasing index represent the number
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
string k="loveleetcode";
Solution s;
cout<<s.firstUniqChar(k);
return 0;

}