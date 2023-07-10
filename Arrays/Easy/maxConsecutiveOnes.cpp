#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int prev=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
            count++;
            if(prev<count)
            prev=count;
            }
            else
            count =0;
        }
        return prev;
    }
};