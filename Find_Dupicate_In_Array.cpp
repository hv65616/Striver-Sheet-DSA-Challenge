#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
	unordered_map<int,int>ump;
	for(auto it : arr)
	{
		ump[it]++;
		if(ump[it]>1) return it;
	}
	return -1;
}
