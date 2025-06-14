#include<iostream>
using namespace std;
#define OVERFLOW 1
#define INVALID_INDEX 2
template <typename T>
class Array
{
    private:
        int capacity;
        int lastIndex;
        T *ptr;
    public:
        Array(int);
        bool isEmpty();
        bool isFull();
        void append(T);
        void insert(int,T);
        void edit(int,T);
        void del(int);
        T getValue(int);
        int count();
        ~Array();
        int find(T);
};
template <typename T> 
Array<T>::Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr= new T[capacity];
}
template <typename T> 
bool Array<T>::isEmpty()
{
    return lastIndex==-1;
}
template <typename T> 
bool Array<T>::isFull()
{
    return lastIndex==capacity-1;
}
template <typename T> 
void Array<T>::append(T data)
{
    if(isFull())
        throw OVERFLOW;
    ptr[lastIndex+1]=data;
    lastIndex++;
}
template <typename T> 
void Array<T>::insert(int index,T data)
{
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    if(isFull())
        throw OVERFLOW;
    for(int i=lastIndex;i>=index ;i--)
        ptr[i+1]=ptr[i];
    ptr[index]=data;
    lastIndex++;
}
template <typename T> 
void Array<T>::edit(int index,T data)
{
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index]=data;
}
template <typename T> 
void Array<T>::del(int index)
{
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    for(int i=index;i<lastIndex ;i++)
        ptr[i]=ptr[i+1];
    lastIndex--;

}
template <typename T> 
T Array<T>::getValue(int index)
{
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}
template <typename T> 
int Array<T>::count()
{
    return lastIndex+1;
}
template <typename T> 
Array<T>::~Array()
{
    delete []ptr;
}
template <typename T> 
int Array<T>::find(T data)
{
    int index;
    for(index=0;index<=lastIndex;index++)
        if(ptr[index]==data)
            return index;
    return -1;
}
int main()
{
    Array<int> arr1(4);//datatype is written between class name and variable
    arr1.append(10);
    arr1.append(20);
    Array <double> arr2(5);
    arr2.append(2.3);
    arr2.append(5.9);
    
}