#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char> stack;
    for(int i=0; i<s.length(); i++)
    {

      char ch= s[i];
      if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' ) 
      {
        stack.push(s[i]);
      }
      else
      {
          //ch ya toh ')' hai or lowercase letter hai
          if(ch==')')
          {
                bool isRedundant = true;              
              while(stack.top()!='(')
              {

                  char top = stack.top();
                  if(top=='+' || top=='-' || top=='*' || top=='/')
                  {
                      isRedundant = false;
                  }
                  stack.pop();
              }
              
              if(isRedundant == true)
              {
                  return true;
              }
              stack.pop();
          } 
  
      }

    }
    return false;
}
