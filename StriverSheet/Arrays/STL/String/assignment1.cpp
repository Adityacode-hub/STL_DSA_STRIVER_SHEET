#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// 1. Function to count words in a given string
int Count_Words(const string& str) {
    int count = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }

    return count;
}

// 2. Function to trim leading and trailing spaces
void Trim_string(string &str) {
    if (str.empty()) return;

    while (!str.empty() && str.back() == ' ')
        str.pop_back();

    while (!str.empty() && str.front() == ' ')
        str.erase(str.begin());
}

// 3. Function to remove extra spaces between words
void Remove_Extra_Space(string &str) {
    string result;
    bool spaceSeen = false;

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
            spaceSeen = false;
        } else if (!spaceSeen) {
            result += ' ';
            spaceSeen = true;
        }
    }

    str = result;
}

// 4. Function to split string into words
vector<string> Split_string(const string& str) {
    vector<string> words;
    string word;

    for (char ch : str) 
    {
        if (ch != ' ') 
        {
            word += ch;
        } else if (!word.empty()) 
        {
            words.push_back(word);
            word.clear();
        }
    }

    if (!word.empty())
        words.push_back(word);

    return words;
}

// 5. Function to reverse words in a string
void Reverse_Word(string &str) {
    vector<string> words = Split_string(str);
    reverse(words.begin(), words.end());

    str.clear();
    for (size_t i = 0; i < words.size(); ++i) {
        str += words[i];
        if (i != words.size() - 1)
            str += ' ';
    }
}

// Main driver function
int main() {
    string s = "   Hello    Aditya  Kumar   Singh   ";

    Trim_string(s);
    Remove_Extra_Space(s);
    cout << "Cleaned String: [" << s << "]\n";

    cout << "Word Count: " << Count_Words(s) << endl;

    vector<string> words = Split_string(s);
    cout << "Words: ";
    for (auto &w : words) cout << "[" << w << "] ";
    cout << endl;

    Reverse_Word(s);
    cout << "Reversed: [" << s << "]\n";

    return 0;
}
