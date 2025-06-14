#include<iostream>
using namespace std;
template<typename X>
void sort(X arr[],int size)
{
    int lastindex=size-1;
    for(int i=0;i<size-1;i++)
     {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
            X temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
     }
     for(int i=0;i<size;i++)
      {
        cout<<arr[i];

      }
    cout<<endl;
      cout<<"greatest stored among sorted one"<<arr[lastindex];

}
 int main()
 {
   int arr[10]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
 return 0;
 }
