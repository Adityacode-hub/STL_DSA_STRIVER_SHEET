#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        
        // Base case
        if (n == 0)
            return 0;

        int count = 0;

        // Move n-1 disks to auxiliary
        count += towerOfHanoi(n - 1, from, aux, to);//first moving from to torod n=3 ie, we are moving 2 i.e n-1 rod

        // Move largest disk
        count += 1;  //we have single remained largest rod and the thing is the only one move is required

        // Move n-1 disks to destination
        count += towerOfHanoi(n - 1, aux, to, from);  //remaining disk moving from aux to from in and order then we need it 

        return count;
    }
};

int main()
{
    Solution s;
    int move=s.towerOfHanoi(5,1,3,2);//these are the order of the tower
    cout<<move<<endl;
    return 0;
}
