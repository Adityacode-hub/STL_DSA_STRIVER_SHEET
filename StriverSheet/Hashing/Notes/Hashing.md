## hashing is used to find out the occurance of the elements in the given array or how many times a number appeared.

## exmple if i have [1,2,3,1,4] then some query is given like [1,2,3,2,1,10] then our output should be like
### 1-> 2 times,2->2 times,3-> 1 times,4 -> o times

## brute force approach is:-

 int f(number,a[])
 { int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] ==number)
        {
            cnt=cnt+1;
        }
    }
    return cnt;
 }
  # hashing->combination of step,pre-storing and fetching;
 -> create a hash array of size+1 and intialize it with zero.(also known as pre-storing)

 ->in array no of times elements appear we will  store in the hash  i.e hash[arr[i]]+1

## fetching invloves we will select each query i.e number and for the  query willl just fetch the value of hash[number] and retunr it instead of running a 'for loop'

## pseudo code
 {
 int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int hash[13]={0};
  for(int i=0;i<n;i++)
  {
    hash[a[i]]+=1;
  }
  int q;
  cin>>q;
  while(q--)
  {
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
  }
  return 0;
  }

## note here  the hash number depends upon the array so it is easy to fetch the data without using the loop

i.e hash[arr[i]]+=1 

agar mere ko index 1 pe value mila toh hash ke index  2 value 1 ho jaega  phir agar arr[i] i.e 2 ka value 4 ha toh hash ke index 4 pe value ka count 1 pervoius +1 current i.e 2 ho jaega.
 
 ## to check the index equivalence and increasing the counter 
