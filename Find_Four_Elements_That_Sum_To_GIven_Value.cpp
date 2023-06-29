#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n)
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int st = j+1;
            int en = n-1;
            while(st<en)
            {
                int sum = arr[i]+arr[j]+arr[st]+arr[en];
                if(sum==target)
                {
                    return "Yes";
                }
                else if(sum<target)
                {
                    st++;
                }
                else
                {
                    en--;
                }
            }
        }
    }
    return "No";
}
