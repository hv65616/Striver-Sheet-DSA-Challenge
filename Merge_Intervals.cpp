#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> vt;
    sort(intervals.begin(), intervals.end());
    int i = 0;
    int n = intervals.size();
    while (i < n)
    {
        vector<int> temp;
        temp.push_back(intervals[i][0]);
        temp.push_back(intervals[i][1]);
        int j = i + 1;
        while (j < n)
        {
            if (intervals[j][0] <= temp[1])
            {
                int val = max(temp[1], intervals[j][1]);
                temp.pop_back();
                temp.push_back(val);
                j++;
            }
            else
            {
                break;
            }
        }
        i = j;
        vt.push_back(temp);
        temp.clear();
    }
    return vt;
}
