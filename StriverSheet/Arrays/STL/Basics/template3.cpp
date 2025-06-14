#include<iostream>
using namespace std;
template <typename X>
X small( X a, X b)
{
    if(a<b )
       return a;
    else
       return b;

        
}
template<class X>
void array(X arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl ;
    }
}
int main()
{
    // int x=small(5,7);
    // cout<< x<<endl;
    // return 0;/
    int arr[10]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    array(arr,size);
 return 0;
}