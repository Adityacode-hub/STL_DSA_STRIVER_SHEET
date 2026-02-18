#include<iostream>
#include<vector>
using namespace std;

void generateparen(int n ,int left,int right,
                   vector<string>&ans,string&temp)
{
    // Base case
    if(left+right==2*n)
    {
        ans.push_back(temp);
        return;
    }

    // Add "("
    if(left < n)
    { 
        temp.push_back('(');
        generateparen(n, left+1, right,ans,temp);
        temp.pop_back();//backtracking the problem i.e for creatin the new branch
    
    }

    // Add ")"
    if(right < left)
    {
       temp.push_back(')');
       generateparen(n,left,right+1,ans,temp);
       temp.pop_back();
    }
}

int main()
{
   int n = 2;

   vector<string> ans;
 string temp;
  generateparen(n,0,0,ans,temp);

   for(auto it:ans)
   {
       cout<<it<<endl;
   }
}
