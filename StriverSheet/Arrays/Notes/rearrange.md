2149 rearrange array elemnts by sign
bugs:- i was not taking first index as positive and second index as negative;

vector<int>result(nums.size())
int positiveIndex=0;
int negativeIndex=1;
for(int num:nums)
{
    if(num>=0)
    {
        result[positiveIndex]=num;
        positiveIndex+=2;
    }
    else
    {
        result[negativeIndex]=num;
        negativeIndex+=2;
    }
}
return result;

# simplified approach of this problem 

#note:-
always read the question calmly and then try to figure out the simplest and easiest appraoch you can take to solve any problem
