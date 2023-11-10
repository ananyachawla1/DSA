#include<bits/stdc++.h>

// type = 0 means no stock purchased as of now.
// type = 1 means stock is purchased.

long dp[100005][2];
long recur(int idx, int type, long *values, int n){
    if(idx==n) return 0;

    if(dp[idx][type]!=-1) return dp[idx][type];

    long maxi = 0;
    if(type==1){
        long notsell = recur(idx+1, type, values, n);
        long sell = values[idx] + recur(idx+1, 0, values, n);
        maxi = max(sell, notsell);
    }else{
        long purchase = -values[idx] + recur(idx+1, 1, values, n);
        long skip = recur(idx+1, 0, values, n);
        maxi = max(skip, purchase);
    }
    return dp[idx][type] = maxi;
}

long getMaximumProfit(long *values, int n)
{
    memset(dp, -1, sizeof dp);
    return recur(0, 0, values, n);   
}