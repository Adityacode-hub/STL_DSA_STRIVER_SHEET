# problem number 485 of leetcode 
bugs:- i was using the two pointers approach but i was lagging somewhere i.e i was not comparing with the the input i.e 1
and i was not incrementing the count value and neither decrementing the count value when not required

so the simple approach was
bug:- 
1. i was inserting the index rather than value i instead of a[i];

2. simple approach was
## Code (C++)

      ```cpp
l=0;
right=nums.size()-1;
lcount=0,lmax=0;
rcount=0,rmax=0;
 while(l<=right)
 {
    if(num[l]==1)
    {
        lcount+=1;
        lmax=max(lmax,lcount);
    }
    else
    {
        lcount=0;
    }
    if(num[right]==1)
    {
        rcount+=1;
        rmax=max(rmax,rcount);
    }

 }
 return max(lmax,rmax);

