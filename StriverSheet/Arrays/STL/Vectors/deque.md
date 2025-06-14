it is the sequential container used same as the vector
it is based on double ended queue
the header required<deque>
deque provides random access iterator

it is made with the dynamic array

deque<int>d1;
deque<int>d2={1-,34,55,18,70};

accessing the deque
---------------------
1.at()
2.[]
3 .implicit iterator
4. explicit iterator

implicit iterator
---------------
deque<int <d1={10,20,30,40};
for(auto x:d1)
{
    cout<<x <<" ";

}

explicit iterator
--------------------
begin() end()
rbegin() rend()
cbegin() cend()
crbegin() crend()

methods of deque
----------------------
assign()
empty()
front()
back()
push_front()
emplace_front()
push_back()
emplace_back()
emplace()
insert()
clear()
erase():range of elemnt to delete
pop_front()
pop_back()
swap()
size()

