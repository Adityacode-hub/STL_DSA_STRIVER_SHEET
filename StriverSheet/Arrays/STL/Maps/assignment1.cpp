#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
void f1()
{
    map<int,string>m1={{001 ,"aditya"},{002,"anuj"},{103,"shekhar"},{106,"amit"}};
    m1.insert(pair<int,string>(004,"rahul"));
       map < int, string > ::iterator it;
       for(it=m1.begin();it!=m1.end();it++)
   {
      cout << it -> first << " " << it -> second << '\n';
   }



}
//always use first and second for map
void f2()
{
    map<int,string>m1={{001 ,"aditya"},{002,"anuj"},{103,"shekhar"},{106,"amit"}};
    m1.insert(pair<int,string>(004,"rahul"));
    int targetkey=106;
    string targetvalue="amit";
    auto it=find_if(m1.begin(),m1.end(),[&](const pair<const int ,string>& p){return p.first==targetkey &&p.second==targetvalue;});
     if (it != m1.end())
        cout << "Found: " << it->first << " -> " << it->second << endl;
    else
        cout << "Not Found\n";
}
int main()
{
    f1();
    f2();
    return 0;
}