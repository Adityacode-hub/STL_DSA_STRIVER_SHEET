## Agressive  cow says that we will take three variable

Yes, exactly! ✅

🐄 count is used to track how many cows we have successfully placed so far.
Here's how it works:
🔢 Variable meanings:
-----------------------------
count: Number of cows placed so far (we start by placing 1 cow at the first stall)

last_pos: The position where the last cow was placed

dist: The minimum required distance between two cows

k: Total number of cows we need to place

------------------------------------
```cpp
count=0;
last_post=stalls[0]; //where the cow was placed initally it was at starting
for(int i=1;i<stalls.size();i++)
{
    if(stalls[i]-last_post>=dist)
    {
        count++;
        last_pos=stalls[i]; //it is now at current index

    }
    if(count>=k)
    {
        return true;
    }

}
return false;