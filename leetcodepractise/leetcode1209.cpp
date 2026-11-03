class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
         int l=s.length();
         //it will store the pair  and its count
         stack<pair<char,int>>st;
         //it will return the answer
         string ans;
         for(int i=0;i<l;i++)
         {
            //it will find out the first character
                 char ch=s[i];
                 //it will check for the empty and  check for the first character never happened first
                 if(st.empty()||ch!=st.top().first)
                 {
                    //it will push the into the stack
                    st.push({s[i],1});
                 }
                 //if it encounter the first elemnt and charcter as the same 
                 else if(st.top().first==ch)
                 {
                    //it will increment the value of the second i.e 
                    st.top().second++;
                    //it will check for the elemtn present is equal to the k or not
                    if(st.top().second==k)
                    {
                        st.pop();//if equal to h then pop out
                    }
                 }
             
         }
           while(!st.empty())//until the stack will be empty
               { //it will first store the value
                       int p=st.top().second;
                       //it will append to the string
                       ans.append(p,st.top().first);
                       //it will pop after the stack
                       st.pop();
               }
               //it will reverse the stored elements
               reverse(ans.begin(),ans.end());
               return ans;//return the answer
    }
};