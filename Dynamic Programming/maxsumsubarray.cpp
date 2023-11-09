#include<bits/stdc++.h>
using namespace std;

int f(int ind,vector<int>&nums)
{
    if(ind==0)
    return nums[ind];
    if(ind<0)
    return 0;

    int pick=nums[ind]+f(ind-2,nums);
    int notpick=0+f(ind-1,nums);
    return max(pick,notpick);
}

int maxAdjacentSum(vector<int> nums)
{
    int n=nums.size();
    return f(n-1,nums);
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << maxAdjacentSum(a) << endl;
    return 0;
}