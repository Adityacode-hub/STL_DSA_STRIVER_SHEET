#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void f1()
{
    priority_queue<int>p1;
    priority_queue<int,vector<int>>p2;
    p2.push(10);
    p2.push(50);
    p2.push(3);
    p2.push(4);
  cout<<p2.top();
  cout<<endl;


}
void f2()
{
    priority_queue<string,vector<string>>p1;
    p1.push("bhopal");
    p1.push("goa");
    p1.push("kolkata");
    p1.push("gaya");
    p1.push("patna");
    cout<<p1.top();
    cout<<endl;


}

class employee
{
    private:
      int empid;
      string name;
      float salary;
    public :
      employee(){}
      employee(int n,string s,float sal):empid(n),name(s),salary(sal){}
      float getsalary()
     const {
        return salary;
      }
      void getdata()
      {
        cout<<empid << "  "<<name <<"  "<< salary;
      }
    friend ostream& operator<<(ostream&,const employee& e);
    //  friend istream& operator>>(istream&,employee&);
  
};
class comparesalary
{
  public:
    bool operator()(const employee& e1, const employee& e2) { //this is functor
        // For max heap based on salary, return true if e1 < e2
        return e1.getsalary() < e2.getsalary();
    }
};
ostream& operator<<(ostream&dout  , const employee& e)
{
    dout<<e.empid<< " "<<e.getsalary();
   return dout;
}
void f3()
{
    priority_queue<employee,vector<employee>,comparesalary>pq1;//here the top elemnt ca only be seen after the comparision so we need to define the class comparision and pass the value
    pq1.push(*new employee(1,"aditya",10000));
    pq1.push(*new employee(1,"aman",1000));
    pq1.push(*new employee(1,"babd",2000));
  cout<<pq1.top();
   cout<<endl;
    

}
int main()
{
    f3();
    return 0;
}
