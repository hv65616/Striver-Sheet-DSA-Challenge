#include <bits/stdc++.h>
int findans(int i, int j, int m, int n, vector<vector<int>> &vt)
{
    if (i >= m || j >= n)
        return 0;
    if (vt[i][j] != -1)
        return vt[i][j];
    if (i == m - 1 && j == n - 1)
        return 1;
    int r = findans(i, j + 1, m, n, vt);
    int d = findans(i + 1, j, m, n, vt);
    return vt[i][j] = r + d;
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> vt(m, vector<int>(n, -1));
    return findans(0, 0, m, n, vt);
}