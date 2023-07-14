#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    //    int l=0;
    //    int r=n-1;
    //    while(l<r)
    //    {
    //        int sum=nums[l]+nums[r];
    //         if (sum < target)
    //        l++;
    //        if(sum==target)
    //        {
    //            return {l,r};
    //        }
           
    //        else
    //        r--;
    //    }
    //    return{-1,-1};
    // }
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};
    }
};