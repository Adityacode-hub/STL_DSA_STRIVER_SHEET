//this is the greedy question that we are going through
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
            sort(g.begin(),g.end());
            sort(s.begin(),s.end());
            int i=0;
            int j=0;
            int result=0;
           while(i<g.size()&&j<s.size())
           {
            if(g[i]<=s[j])
            {
                result=result+1;
                i++;
                j++;
        
            }
            else{
                //not matched
                j++;
            }
           }
           return result;
    }
};
//sbko atleast one cookie chahiye