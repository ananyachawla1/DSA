#include <bits/stdc++.h> 
bool recur(int k,int tempSum,vector<int>&arr,int i)
{
    if(tempSum==k)
    {
        return true;

    }
    if(i>=arr.size())
    return false;

    int recursum1=recur(k,tempSum+arr[i],arr,i+1);
        int recursum2=recur(k,tempSum,arr,i+1);
        return recursum1 || recursum2;

}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    recur(k,0,arr,0);

}