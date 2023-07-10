#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> vt;
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (j >= 0)
    {
        if (arr2[j] >= arr1[i])
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
        else if (arr1[i] >= arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
    }
    return arr1;
}