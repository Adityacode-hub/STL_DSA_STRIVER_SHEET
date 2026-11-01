class Solution {
public:
    string removeDuplicates(string s, int k) {
        int p = s.length();
        bool removed = true;
        while (removed) {
            removed = false;
            for (int i = 0; i + k <= s.length(); i++) {
                int count = 1;
                for (int j = 1; j < k; j++) 
                {
                    if (s[i] == s[i + j]) 
                    {
                        count++;
                    }
                    else
                     {
                        break;
                    }
                }

                if (count == k) 
                {
                    s.erase(i, k);
                    removed = true;
                    break;
                }
            }
        }

        return s;
    }
};