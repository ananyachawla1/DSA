#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=1;
        int n=nums.size();
        int high=n-2;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid+1]<nums[mid])
            {
                return mid;
            }
             if(nums[mid]>nums[mid-1])
             low=mid+1;
             else
             high=mid-1;
        }
        if (n == 1) 
        return 0;
    if (nums[0] > nums[1]) 
    return 0;
    if (nums[n - 1] > nums[n - 2]) 
    return n - 1;

    //     if(n==1)
    //     return 0;
        
    //      if(nums[1]>nums[0])
    //      return 1;
    //     if(nums[0]>nums[1])
    //     return 0;
    //     if(nums[n-1]>nums[n-1])
    //    return n-1;
       return -1;
           }
};
