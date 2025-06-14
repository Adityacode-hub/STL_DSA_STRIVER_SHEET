#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// bool isPrime(int x)
// {
//     for(int i=2;i<x;i++)
//     {
//         if(x%i==0)
//         {
//             return false;
//         }

//     }
//     return true;
// }
// void printprime(int n)
// {
//     if(isPrime(n))
//     {
//         cout<<n << " ";
//     }
// }
// void f1()
// {
//   vector<int>v={10,13,15,23,93,29,31,40};
//   for_each(v.begin(),v.end(),printprime);//we are passing the thing as the pointer
// cout<<endl;
// }

// class prime
// {
//     public :
//       bool isPrime(int x)
//       {
//         for(int i=2;i<x;i++)
//         {
//             if(x%i==0)
                
//             {
//                 return false;
//             }
//         }
//         return true;
//       }
//       bool operator()(int n)
//       {
//         if(isPrime(n))
//           cout<<" "<<n;
//       }
// };
// int main()
// {
//     vector<int>v={10,13,15,21,23,29,31,35,40};
//     for_each(v.begin(),v.end(),prime());//class name is passed as type of the function
//     cout<<endl;
// }

int main()
{
    vector<int>v={10,13,15,21,23,29,31,35,40};
    for_each(v.begin(),v.end(),[](int &x){
        int i;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                   break;
            }
        }
        if(i==x)
        {
            cout<<x<<" ";
        }
    });
}


//note we not taking values to the capture bcz for each need to iterate the value each time