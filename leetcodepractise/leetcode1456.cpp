class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int len = s.length();
        int low = 0;
        int high = k - 1;

        int count = 0;
        int maximum = 0;

    
        for(int i = low; i <= high; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
               s[i] == 'o' || s[i] == 'u')
            {
                count++;
            }
        }

        maximum = count;

       
        while(high < len - 1)
        {
           
            if(s[low] == 'a' || s[low] == 'e' || s[low] == 'i' ||
               s[low] == 'o' || s[low] == 'u')
            {
                count--;
            }
            if(s[high + 1] == 'a' || s[high + 1] == 'e' ||
               s[high + 1] == 'i' || s[high + 1] == 'o' ||
               s[high + 1] == 'u')
            {
                count++;
            }

            low++;
            high++;

            maximum = max(maximum, count);
        }

        return maximum;
    }
};