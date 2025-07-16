## always implemented on the sorted array
## we are given the target then we will find the index

## keep the pointer at low and another at the end i.e n-1
  and  the( mid=low+high/2) and the thing between low and high is the search space then the mid value == true i.e true or false  then we will check the index  value elimination according to it


## one important thing to point at a time that as we will compare ,we will get the value whether it is greater or not so it is easy to decide whether the target number will be at left or at right.


## conclusion we got it the place where we will get low ,high and mid are equal then we got the target

## low will get updated as mid value is smaller or greater
and the value of all the mid high will also get updated as per the requirement.

##pseudo code

```cpp

    low=0,high=n-1;
    while(low<=high)
    {
        mid=low+high/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;



## assign long long low and high at the time of assigning

_________________________________
NOTES:-
__________________________________

## important point to note that when u will check for the mid and if it satisfies i.e 
 check(mid)== true then right=mid-1 for 
 try smaller
 check(mid)==false mid is not valid (too small/etc)
 otherwise use left=mid+1  try bigger

 ## one more thing is when u will move from right to left then you will always have the smaller and when u will move form left to right then u will move to right to left

