#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{   unordered_set<int> uset; 
    unordered_set<int> :: iterator it; 
     
    for(int i=0;i<5;i++)
    {
        uset.insert(i+2); 
    }
     
    cout<<"\nSize of uset: "<<uset.size();
    cout<<endl;
     
    it= uset.begin();
    uset.insert(it,99);
     
    int ary[]= { 13, 26, 39};
    uset.insert(ary, ary+3); // Inserting using method3
     
    cout<<"\nElements in unordered set are: ";
    for
    (it= uset.begin(); it!=uset.end(); it++) cout << *it << " ";     
    cout<<endl;

     return 0;
  }

  //when we want to count the occurance of the specific data in an unordered format or when we want to count data occurance 