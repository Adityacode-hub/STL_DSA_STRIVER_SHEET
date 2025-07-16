
# Associative container

map,set,multipmap,multiset

in associative containers,elements are inserted in a predefined order-for example as sorted ascending

(unordered associative container are also available .unordered-set,unordered-map,unordered_multiset,unordered_multimap) they all are made from the hash tree.

# set-binary search tree
# map-red black tree (which is balanced tree or completely balanced tree)
# multiset-bst
# multimap-rbt

# container Adapter

 (stack,queue,priority_queue)

 container adapter is a variation of a sequence conatiner that restrict the interface for simplicity and clarity.

## iterator is an object that can iterate over elements in a container and provide  the access to the individual elements.

# #input iterator -only reading.

# #forward iterator- read& write ,move forward.

# # bidirectional- read & write ,move forward and backward.

# # random access iterator- read and write ,move freely any number of steps.

vectors:- random access iterator.(dynamic array)->the iterator used is random access iterator.
array:-random accesss iterator.(dynamic array)
set:-bidirectional iterator.

## functors:- that implements the operators()
 stl is primarily  objects primarly as sorting for container and in algorithm

 ## advantage of functors
 -----------------------------------
 it is an object therefore it may contain state.

 it is a type therefore can be used as a template parameter.


 example-
 -----------
 // functor is simply overloading with the operator()
 class fun
 {
    public :
       int operator()(int a,int b)
        {
          return a<b;
        }
 };
 int main()
 {
    fun f;
    int a=f(5,7);//it looks like a function but it is calling the call operator
 }

//simple example of the functor as comparator
struct CustomCompare {
    bool operator()(int a, int b) {
        return a > b;  // descending
    }
};

sort(v.begin(), v.end(), CustomCompare());  // functor comparator
