#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n=a.size();
    int sum=a[0];
    int l=0;
    int r=0;
    int maxLen=0;
    while(r<n)
    {
        while(l<=r&&sum>k)
        {
        sum-=a[l];
        l++;
        }
        if(sum==k)
        maxLen=max(maxLen,r-l+1);
        r++;
        if(r<n)
        sum+=a[r];
    }
    return maxLen;
}



    

