#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
long long calculateHours(vector<int>& piles,int hourqnty)
{
     long long totalHours=0;
     int n=piles.size();
        for(int i=0;i<n;i++)
     {
         totalHours+=ceil((double) piles[i]/(double)hourqnty);
     }
     return totalHours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=0;;
        int ans=INT_MAX;
        int n=piles.size();
     high= *max_element(piles.begin(),piles.end());
while(low<=high)        {
             int mid=(low+high)/2;
        
            if(calculateHours(piles,mid)<=h)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
        
    
};