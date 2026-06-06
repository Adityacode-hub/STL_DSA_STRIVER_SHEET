// { hot,dog,dot,lot,log,cog }
// 0 1 2 3 4 5
// begin=hit      end=cog  check whether the begin and end comes in the array 

//so start from hit and change single alphabet in way that u find a string resembling from the array

// hit --> i--> 0 --> hot

//hot--> dot -->change t to g --> dog -->change the d to c it will become cog i.e the return thing will be


//the see the number of steps required to reach the end word

//take the another example as the 

//{c,e,q,s,y,z} begin=a  end=y

//take a and the number of possibility would be 25 

//bfs  will be used here

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> st(wordList.begin(), wordList.end());

        if (st.find(endWord) == st.end())
            return 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        st.erase(beginWord);

        while (!q.empty()) {

            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            if (word == endWord)
                return steps;

            for (int i = 0; i < word.length(); i++) {

                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {

                    word[i] = ch;

                    if (st.find(word) != st.end()) {

                        q.push({word, steps + 1});
                            //[(hit ,1)] word is hit and step is 1
                        st.erase(word); // visited mark
                    }
                }

                word[i] = original; // restore
            }
        }

        return 0;
    }
};
int main()
{
    Solution obj;

    string beginWord = "hit";
    string endWord = "cog";

    vector<string> wordList = {
        "hot",
        "dot",
        "dog",
        "lot",
        "log",
        "cog"
    };

    int ans = obj.ladderLength(beginWord, endWord, wordList);

    cout << "Answer = " << ans << endl;

    return 0;
}