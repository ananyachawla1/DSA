#include<iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string rev="",temp="";
        int l=0;
        while(s[l]==' ')
        {
            l++;
        }
        int r=s.length()-1;
        while(s[r]==' ')
        r--;
        while(l<=r){
        if(s[l]!=' ')
        temp=temp+s[l];
        else{
            if(s[l-1]==' ')
            {
                l++;
                continue;
            }
            else{
                rev=temp+" "+ rev;
                temp="";
            }
        }
        l++;
        }
        rev= temp+ " "+ rev;
        rev.erase(rev.begin()+ rev.length()-1);
        return rev;

    }
};