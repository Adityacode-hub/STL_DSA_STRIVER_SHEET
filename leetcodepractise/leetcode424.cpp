#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int low=0;
        int high=s.length();
        int maximum=0;
        unordered_map<char,int>mp;  //this is an unordered map
        for(int right=0;right<high;right++)
        {
            mp[s[right]]++;
            maximum=max(maximum,mp[s[right]]);
            //int len=high-low+1
            while((right-low+1)-maximum>k)
        {

            mp[s[low]]--;
            low++;
        }
        ans=max(ans,right-low+1);
        }
       
       return ans;
    }
};
// s="AABAB"
//maxfreq=3 i.e of A
//minfreq i.e of B=2 and length =5
//replacement =5-3 ie 2 h jisko replace krna h
//k=1 i.e humko 2 h replacement allowed h then we have to shrinnk the window
///mp[s[low]]-- low++
//mp[s[0]] i.e low=0 s[0]='A' i.e 3 se 2
//next low will become 1 from 0 now current window "ABAB"

//2nd iteration mei  A=2 B=2 replacement 4-2=2
//still invlaid then A=2 se 1 hog then low=2 new "BAB"
//now  A=1 and B=2 window size =3 replacement=1 valid window while loop terminated
//ans =max(0,3)=3
