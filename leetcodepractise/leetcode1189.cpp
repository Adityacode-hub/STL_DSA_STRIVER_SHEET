#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution
{
    public:
     int maxNumberOfBalloons(string text)
     {
      string t="balloon";
      unordered_map<char,int>p;
      unordered_map<char,int>s;
      for(int i=0;i<t.length();i++)
      {
        p[t[i]]++;
      }
      for(int i=0;i<text.length();i++)
      {
        s[text[i]]++;
      }
         int minimum = s['b'] / p['b'];//har baar test case ke according set hoga yeh b ka value i.e available /required one
      for(int i=0;i<t.length();i++)
      {
       int count=s[t[i]]/p[t[i]];
       minimum=min(minimum,count);
      }

      return minimum;//this is the minimum required
     }
};
int main()
{
    Solution s;
    string p="loonbalxballpoon";
   cout<< s.maxNumberOfBalloons(p);
 return 0;
}
//yaha my error was was not intialising the value of the minimum as the b that is required both in the text and other thing
