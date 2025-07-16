#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j;
    for(int i=1;i<=15;i++)
    {
        int k=1;
        for(int j=1;j<=18;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                int val;
                if(j<=5)
                {
                    val=j-(5-i);
                }
                else{
                  val=(4+i)-j+1;
                  cout<<val;
                }
             
            }
            else{
                cout<<" ";
             }
           
        }
          
        cout<<"\n";
    }
}