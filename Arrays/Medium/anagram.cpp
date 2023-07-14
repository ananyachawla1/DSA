#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length())
        return false;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
       for( auto i: mp)        {
            if(i.second!=0)
            return false;
        }
        return true;
    }
};