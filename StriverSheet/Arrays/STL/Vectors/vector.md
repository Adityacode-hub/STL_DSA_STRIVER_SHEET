vector is sequential container
vector is implemented by using [];

 asscessing method.

 1. []
 2. at() with bound checking.
 3. implicit iterator.
 4. explicit iterator.

 5. empty :return strue or false.
 6. size:return the value in the vector.
 7. capacity:returns the how much it can hold.
 8. shrink_to_fit :to remove the empty block.
 9. push_back() :to insert the last value from the end.
 10. pop_back():to return the removed last value.
11. emplace():to insert.
12. erase():which specific element u want to erase.
        
v1.erase(v1.begin()+1,v1.end()-1);
for(auto x:v1)
  cout<<x<<" ";
cout<<endl;

in insert we can give the frequency
 i.e
 v1.insert(v1.end()-1,3,80)  :- it will insert the three time 80 in the list


//extended version of v2

 v2.insert(v2.begin(),v1.begin(),v1.end());
{
    for(auto x:v2)
    {
        cout<<x<<endl;
    }
}



