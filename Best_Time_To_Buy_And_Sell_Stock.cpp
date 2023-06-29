#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int amt = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        profit = max(profit, prices[i] - amt);
        amt = min(amt, prices[i]);
    }
    return profit;
}