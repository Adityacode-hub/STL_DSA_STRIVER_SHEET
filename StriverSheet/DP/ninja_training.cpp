#include <iostream>
#include <vector>
using namespace std;

int solve(int day, int last, vector<vector<int>>& points)
{
    // Base Case
    if(day == 0)
    {
        int maxi = 0;

        for(int task = 0; task < 3; task++)
        {
            if(task != last)
            {
                maxi = max(maxi, points[0][task]);
            }
        }

        return maxi;
    }

    int maxi = 0;

    for(int task = 0; task < 3; task++)
    {
        if(task != last)
        {
            //just assume we have started form day 2
            int point = points[day][task] + solve(day - 1, task, points);

            maxi = max(maxi, point);
        }
    }

    return maxi;
}

int ninjaTraining(int n, vector<vector<int>>& points)
{
    return solve(n - 1, 3, points);
}

int main()
{
    vector<vector<int>> points = {
        {10, 40, 70},
        {20, 50, 80},
        {30, 60, 90}
    };

    cout << ninjaTraining(3, points);
}