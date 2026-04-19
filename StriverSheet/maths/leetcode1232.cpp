#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        //y=mx+c
        //m=y2-y1/x2-x2
        //corodiantes[i][0]-x this is array based indexing
        //corodinates[i][1]-y
        int d_y=coordinates[1][1]-coordinates[0][1];
        int d_x=coordinates[1][0]-coordinates[0][0];
         for(int i = 2; i < coordinates.size(); i++) {
            int curr_dy = coordinates[i][1] - coordinates[i-1][1];
            int curr_dx = coordinates[i][0] - coordinates[i-1][0];

            // Cross multiplication instead of division here we have found the slope
            if(d_y * curr_dx != curr_dy * d_x) {
                return false;
            }
        }
        return true;
    }
};

int main()
{  
    Solution s;
    vector<vector<int>>coordinates={{1,2},{3,4},{5,6},{7,8}};
    cout<<s.checkStraightLine(coordinates);
    
}