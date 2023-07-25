#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int minOpen=0,maxOpen=0;
        for(char c: s)
        {
            if(c=='(')
            {
                minOpen++;
                maxOpen++;
            }
            else if(c==')')
            {
                minOpen=max(minOpen-1,0);
                maxOpen--;
            }
            else
            {
                minOpen=max(minOpen-1,0);
                maxOpen++;
            }
            if(maxOpen<0)
            return false;
        }
    if( minOpen==0)
    return  true;
    else
    return false;
    }
};