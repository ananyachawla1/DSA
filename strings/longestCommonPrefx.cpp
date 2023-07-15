#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   string longestCommonPrefix(vector<string>& str) 
    {
            string prefix="";
            sort(str.begin(),str.end());
            int n=str.size();
            string first=str[0],last=str[n-1];
            for(int i=0;i<min(first.size(),last.size());i++)
            {
                if(first[i]!=last[i])
                return prefix;
            
            prefix+=first[i];
            }
            return prefix;
    }
    };
