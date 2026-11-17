
class Solution {
public:
    string minWindow(string s, string t)
    {
        int n = s.length();
        unordered_map<char,int> sm;
        unordered_map<char,int> tm;

        int minlen = INT_MAX;
        int start = 0;

        for(int i = 0; i < t.length(); i++)
        {
            tm[t[i]]++;
        }

        int left = 0;
        int count = 0;
        int required = tm.size();

        for(int right = 0; right < s.length(); right++)
        {
            sm[s[right]]++;

            // Current character ki required frequency match hui?
            if(tm.count(s[right]) &&
               sm[s[right]] == tm[s[right]])
            {
                count++;
            }

            // Saare required characters mil gaye
            while(count == required)
            {
                int len = right - left + 1;

                if(len < minlen)
                {
                    minlen = len;
                    start = left;
                }

                // Leftmost character remove karo
                char ch = s[left];
                sm[ch]--;

                if(tm.count(ch) && sm[ch] < tm[ch])
                {
                    count--;
                }

                left++;
            }
        }

        return minlen == INT_MAX ? "" : s.substr(start, minlen);
    }
};
