#include<iostream>
using namespace std;
template<typename X>//X  is placeholder of datatype  or class can be used
X big(X a,X b)
{
    if(a>b)
       return a;
    else 
        return b;
}

int main()
{
    int x=big(3,4);
    float y=big(3.24f,5.26f);
 cout <<"the value of x "<<x <<endl;
 cout<<"the value of y "<< y <<endl;
 return 0;

}