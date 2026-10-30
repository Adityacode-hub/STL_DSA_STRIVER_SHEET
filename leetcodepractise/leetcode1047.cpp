class Solution {
public:
    string removeDuplicates(string s) 
  {
   int len=s.length();
   stack<char>st;
   string res;
   for(int i=0;i<len;i++)
   {
    if(st.empty())
    {
        // agar empty h toh push karo 
        st.push(s[i]);
        continue;//it will go to the next iteration after going through this iteration
    }
    if(st.top()==s[i])
    {
    //hai toh pop karo 
        st.pop();
        continue;
    }
    //agle step pe agr distinct elemnt ho toh push kar do 
    st.push(s[i]);
   }        
   while(!st.empty())
   {
    //isko string mei push karo 
    res.push_back(st.top());
    st.pop();
   }
   //reverse kar ke return karo kyun ki c,a nhi c,a chahiye
   reverse(res.begin(),res.end());
   //return the result
   return res;
    }
};