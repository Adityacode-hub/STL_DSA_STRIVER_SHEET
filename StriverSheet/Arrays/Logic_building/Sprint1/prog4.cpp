#include<iostream>
using namespace std;
void array(int a[],int size)
{
    int largest=0;
    int smallest;
    for(int i=0;i<size-1;i++)
    {
       if(a[i]>largest)
       {
        largest=a[i];
       }
       if(a[i]<smallest)
       {
        smallest=a[i];
       }
    }
    cout<<"Largest:"<< largest<<",";
    cout<<"Smallest:"<<smallest;
   

}
int main()
{
    int a[]={4,7,1,8,5};
    int size=sizeof(a)/sizeof(a[0]);
    array(a,size);
    
    return 0;
}