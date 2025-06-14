#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void f1()
{
    vector<int>v1={1,2,3,4,-5,6,7,8,9,10};
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]>0)
        {
             v1.erase(v1.begin()+1,v1.end()-1);
        }
    }
    for(auto x:v1)
    {
        cout<<x<< " ";
    }
}
void f2()
{
    vector<int>v2={1,23,4,5,6,7,8};
    v2.insert(v2.end()-1,3,25);
    for(auto x:v2)
    {
        cout<<x << " ";
    }
}

void p3()
{
    vector<int> given_vector = {2,4,10,5,7,6,15,20,3,9};
    vector <vector<int>> v1;
    vector <int> *ptr;
    int i=0,s,e,j=0;
    while(i<given_vector.size()-1)
    {
        s=i;
        while(i<given_vector.size()-1 && given_vector.at(i)<given_vector.at(i+1))
            i++;
        e=++i;
        ptr=new vector<int>();
        ptr->insert(ptr->begin(),given_vector.begin()+s,given_vector.begin()+e);
        v1.insert(v1.begin()+j,*ptr);
        j++;
        
    }
    for(auto x : v1)
    {
        for(auto y:x)
            cout<<y<<" ";
        cout<<endl; 
    }
}
void f4()
{
    vector<int> a = {2, 4, 10, 5, 7, 6, 15, 20, 3, 9};
    for (int i = 0; i < a.size() - 1; i++) {
    if (a[i] < a[i + 1]) {
        cout << a[i] << " ";
        while (i < a.size() - 1 && a[i] < a[i + 1]) {
            i++;
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

}

bool is_prime(int n)
{
  for(int i=2;i<n-1;i++)
  {
    if(n%i==0)
    {
        return false;
    }
  }
  return true;
}
void f4() {
    vector<int> v1 = {2, 10, 7, 14, 23, 18, 53};
    vector<int>::iterator newEnd;

    // Remove all prime numbers using remove_if and a lambda
    newEnd = remove_if(v1.begin(), v1.end(), [](int x) -> bool {
        return is_prime(x);
    });

    // Print the remaining elements
    for (auto it = v1.begin(); it != newEnd; ++it)
        cout << *it << " ";
    cout << endl;
}
int main()
{
    // f1();
    // f2();
    // p3();
    f4();
    return 0;
}