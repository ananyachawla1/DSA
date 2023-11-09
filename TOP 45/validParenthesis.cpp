bool isValidParenthesis(string s)
{
    stack<int>st;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if((s[i]=='(') || (s[i]=='{')|| (s[i]=='['))
        st.push(s[i]);

        else
        if(st.empty())
        return false;
        char c=st.top();
        st.pop();
        if(((s[i]=='('&& c==')') || (s[i]=='{' && c=='}')|| (s[i]=='[' && c==']')){
      st.pop();
      continue;
        }
                else
                 return false;
    }
    if (st.empty())
    return true;
    
    else
    return false; 
    // Write your code here.
}