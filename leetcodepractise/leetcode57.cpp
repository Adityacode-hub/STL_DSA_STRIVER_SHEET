class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> ans;

        int start = newInterval[0];
        int end = newInterval[1];

        int i = 0;
        int n = intervals.size();

        while (i < n)
        {
            int start1 = intervals[i][0];
            int end1 = intervals[i][1];

            // Case 1: Existing interval is before newInterval
            if (end1 < start)
            {
                ans.push_back(intervals[i]);
            }

            // Case 2: Existing interval is after newInterval
            else if (end < start1)
            {
                ans.push_back({start, end});

                while (i < n)
                {
                    ans.push_back(intervals[i]);
                    i++;
                }

                return ans;
            }

            // Case 3: Overlapping intervals
            else
            {
                start = min(start1, start);
                end = max(end1, end);
            }

            i++;
        }

        // Add the final merged interval
        ans.push_back({start, end});

        return ans;
    }
};