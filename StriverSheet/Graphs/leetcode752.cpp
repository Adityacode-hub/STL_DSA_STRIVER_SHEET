//open the lock
#include<iostream>
#include<unordered_set>
#include<queue>
using namespace std;
class Solution {
public:
    int openLock(vector<string>& deadends, string target) 
    { //jusrt copy the element  of the deadends same to the dead using the iterator

        //for(auto x:deadends){dead.insert(x);}


        //unordered_set<string>dead; for(auto it =deadend.begin();it!=deadends.end();it++){dead.insert(*it)}
          
        //this is the direct method to iterate the things means directly copy it 
        
        unordered_set<string> dead(deadends.begin(),deadends.end());
        //base case
        if(dead.find("0000")!=dead.end())
        {
            return -1;
        }
        queue<pair<string,int>>q;
        //remove the dublicacy
        unordered_set<string>visited;
        q.push({"0000",0});
        visited.insert("0000");
        while(!q.empty())
        {
            string s=q.front().first;
            int steps=q.front().second;
            q.pop();
            //base case
            if(s==target)
            {
                return steps;
            }
            //this is the rotation of the  wheel
            for(int i=0;i<4;i++)
            {
                string up=s;
                string down=s;
                up[i]=(s[i]=='9')?'0':s[i]+1;//+1
                down[i]=(s[i]=='0')?'9':s[i]-1;//-1
                if(dead.find(up)==dead.end()&&visited.find(up)==visited.end())
                {
                    //up is not a deadend and up is not visited then add up to queue and mark it as visited
                    q.push({up,steps+1});
                    visited.insert(up);
                }
                if(dead.find(down)==dead.end()&&visited.find(down)==visited.end())
                {
                    q.push({down,steps+1});
                    visited.insert(down);
                }
            }
        }
        return -1;
    }
};

int main()
{
 Solution obj;
 vector<string>deadend={
      "0201",
        "0101",
        "0102",
        "1212",
        "2002"
 };
 string target="0202";
 int ans=obj.openLock(deadend,target);
 cout<<"Minum moves="<<ans <<endl;
 return 0;

}