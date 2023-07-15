#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m1,m2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(m1[s[i]]&&m1[s[i]]!=t[i])
            return false;
            if(m2[t[i]]&&m2[t[i]]!=s[i])
            return false;
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        return  true;
    }
};