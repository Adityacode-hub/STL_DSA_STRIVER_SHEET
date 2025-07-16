array is the sequence container

one of the basic class implemented by the standard template library is the array class.

it is the sequential container it can not be further extandable  based on arrary data structure

explicit iterator
--------------------        four different classes
                                     -------------------
1. begin() end(last element ke ek baadh ka elemnt ) -          iterator
2. cbegin() cend() -     const_iterator
3. rbegin() rend() -      reverse_iterator
4. crbegin() crend()-     const_reverse_iterator
5. front()
6. back()
7. empty()
8. size()
9.data()        -> returns the address of the first element

*(it+i)   ->random access iterator
it--      ->bidirectional iterator
it++      ->forward iterator

it++       ->forward
it+1       ->bidirectional