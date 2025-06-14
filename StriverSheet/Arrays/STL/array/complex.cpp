#include <iostream>
#include<array>
using namespace std;
class complex {
private:
    int a, b; // a = real, b = imaginary
public:
    void setData(int x, int y);
    void showdata();
    complex(){}
    complex(int x,int y)
    {
        a=x;
        b=y;

    }
    complex operator+(complex);

};
void complex::setData(int x,int y)
{
    a=x;
    b=y;

}
void complex::showdata()
{
    cout<< a<<"+" <<  b<<"i"<<endl ;
}
complex complex::operator+(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;

}
 void a()
 {

array<complex,5> a1={
      complex(2,3)
       ,complex(-4,5),complex(1,-2),complex(8,0),complex(4,4)};
  
   complex sum;
   sum.setData(0,0);
   for(int i=0;i<5;i++)
   {
    // sum=sum+a1[i];
    sum=sum.operator+(a1[i]);
   }
   sum.showdata();
 }

 int main()
 {
    a();
    return 0;
 }



