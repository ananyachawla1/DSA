#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string res;
        int count=0;
        for(int i=0;i<n;i++)
        {
         if(s[i]=='('){
            if(count==0)
            count++;
            else
            {
                count++;
                res.push_back(s[i]);
            }
         }
          else
          {
            if(count==1)
            count--;
            else
            {
                count--;
                res.push_back(s[i]);
            }
          }  
         
        }  
        return res;
    
    }
};