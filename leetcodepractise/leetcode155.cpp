#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class MinStack {
public:
        stack<int>st;//this is the actual elements
        stack<int>minSt;//this is the minimum of the elements
    MinStack() 
    {
         
    }
    
    void push(int value) 
    {
        st.push(value);
        if(minSt.empty())
        {
            minSt.push(value);
        }
        else{
            minSt.push(min(value,minSt.top()));
        }
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() 
    {
     return st.top();   
    }
    
    int getMin() {
        return minSt.top();
    }
};