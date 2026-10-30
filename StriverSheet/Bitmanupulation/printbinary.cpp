#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem = 0;
int place = 1;

while(n > 0)
{
    int r = n % 2;
    rem = rem + r * place;
    place = place * 10;
    n = n / 2;
}
cout<<rem;
}