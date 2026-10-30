class Solution {
public:
    bool isValid(string s)
    {
        int len = s.length();
        stack<char> st;

        for(int i = 0; i < len; i++)
        {
            char ch = s[i];

            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }

                char t = st.top();

                if((t == '(' && ch == ')') ||
                   (t == '{' && ch == '}') ||
                   (t == '[' && ch == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return st.empty();
    }
};