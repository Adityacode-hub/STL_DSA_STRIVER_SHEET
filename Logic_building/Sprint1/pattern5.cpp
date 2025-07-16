#include<iostream>
using namespace std;

int main()
{ 
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i = 0; i <2*n-1; i++)

    {  int r;
        i<n?r++:r--;
        int k=n;

     
        for(int j = 0; j < 2*n-1; j++)
        {
            if(j>=r&&j<=2*n-r)
            {
                cout<<k;
            }
            else{
                if(j<n)
                {
                      cout<<k;
                      k--;
                      
                }
                else
                {
                     
                }
            }
            
        }
        cout << "\n";
    }
}

