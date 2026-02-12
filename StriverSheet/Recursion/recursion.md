### Recursion Tree — Take / Not Take

Input: [1,2,3]

Each level represents a decision:
- Include element
- Exclude element

Tree height = n  
Total subsequences = 2^n


```cpp

void subsequence(int index, vector<int>& arr, vector<int>& temp)
{
    if(index == arr.size())
    {
        // Leaf node
        print(temp);
        return;
    }

    // Take
    temp.push_back(arr[index]);
    subsequence(index+1, arr, temp);

    // Not Take
    temp.pop_back();
    subsequence(index+1, arr, temp);
}

//template

Input = "ab"

Index → 0
Char  → 'a'
Output → ""
we make the input smaller evrytime
                         ""
                   /               \
            (L1) "a"            (L2) ""
                /   \            /   \
        (L1) "ab" (L2) "a" (L1) "b" (L2) ""
          |        |        |        |
        Print    Print    Print    Print
         ab        a        b        ""

//first not to include then 2nd to include we have to take two decision
//jiske lea decision lenge usko chor dena h

agar maano we have "ab"

a ke lea decision leaa then
   we have : " "
 1st not to take:- samller output " " smaller input="b"
 2nd we have to take:- smaller output "a" smaller input "b"
 then again go for the smaller input aur output hamesha pahle wala trace krna

 finally answer hoga : :" " a b ab;
 
 these four will be the solution
