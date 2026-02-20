#include<iostream>
#include<string>
using namespace std;
#include<iostream>
#include<string>
using namespace std;
void consecutivestring(string s,int curr)
{
    // Base case
    if(s.length()==curr)
    {
        cout<<s<<endl;
        return ;
    }

    // Add 'a' only if last two are not "aa"
    if(s.length() < 2 || !(s[s.length()-1]=='a' && s[s.length()-2]=='a'))
    {
        consecutivestring(s+"a",curr);
    }

    // Add 'b' (always allowed)
    consecutivestring(s+"b",curr);
}

int main()
{
    int n = 3;
    string k = "";

    consecutivestring(k,n);

    return 0;
}

int main()
{
    int n=3;
    string k="";
    consecutivestring(k,n);
    return 0;
}