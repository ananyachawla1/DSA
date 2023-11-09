#include<bits/stdc++.h>
#include<vector.h>
int dp[100003][4];

int recur(int day, int prevActivity, vector<vector<int>> &points){
    if(day==points.size()){
        return 0;
    }

    if(prevActivity!=-1 and dp[day][prevActivity]!=-1) return dp[day][prevActivity];

    int maxm = 0;
    for(int i=0; i<points[0].size(); i++){
        if(prevActivity!=i){
            int temp = points[day][i] + recur(day+1, i, points);
            maxm = max(maxm, temp);
        }
    }
    if(prevActivity!=-1) dp[day][prevActivity] = maxm;
    return maxm;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    memset(dp, -1, sizeof dp);  // 0 or -1;
    return recur(0, -1, points);
}