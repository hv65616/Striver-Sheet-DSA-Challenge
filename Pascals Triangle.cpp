#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long>> vt;
    for (int i = 0; i < n; i++)
    {
        vector<long long> temp(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            temp[j] = vt[i - 1][j] + vt[i - 1][j - 1];
        }
        vt.push_back(temp);
    }
    return vt;
}
