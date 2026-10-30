#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int>st;
         int len=tokens.size();
         for(int i=0;i<len;i++)
         { string ch=tokens[i];
            if(ch != "+" && ch != "-" &&
                ch != "*" && ch != "/")
            {
                st.push(stoi(ch));//to change from string to integer
            }
            else 
            {
                int a=st.top();//yeh top element dega stack ka
                st.pop();//bahar nikalo
                int b=st.top();//dusra top elements stack ka dega
                st.pop();//bahar dekha nikalo
                int res;//result 
                if(ch=="+")
                {
                    res=a+b;//do the operation like + operation
                }
                else if(ch=="-")
                {
                    res=a-b;//do the operation minus operation

                }
                else if(ch=="*")
                {
                    res=a*b;//do the operation * multiplication
                }
                else{
                    res=a/b;//so the operation division
                }
                st.push(res);
            }
           
         }
 return st.top();//this will return the final top element in the stack
    }
};

int main()
{
    Solution s;
    vector<string>k={"2","1","+","3","*"};
    cout<<s.evalRPN(k);
    return 0;
}