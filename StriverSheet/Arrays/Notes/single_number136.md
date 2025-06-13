
# leetcode 136(single number)

## the problem statement was to find the unique elements and return the value so the simple approached solution was to compare the same and return the distinct 
## bugs:- i was not resetting the value of count and flag and another thing is  to skip the same i can use the count value

## case of single element should be kept in mind always

## CODE(C++)
     ```cpp
{
        int count = 1;
        int i, j;
        bool flag = false;

        sort(nums.begin(), nums.end());

        for (i = 0; i < nums.size() - 1;) {
            count = 1;      // ✅ Reset count for each new i
            flag = false;   // ✅ Reset flag each time

            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count += 1;
                    flag = true;
                } else {
                    break;  
                }
            }

            if (count == 1) {
                return nums[i]; 
            } else {
                i += count;  
            }
        }

        return nums[nums.size() - 1];
    }
