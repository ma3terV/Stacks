/*
   1.if opening bracket is encountered,push.
   2.if closing bracket is encountered, stack must not be empty and corresponding opening bracket must be present. 
   3.at the end stack must be empty

    
*/
class Solution {
public:
    bool isValid(string s) {
        stack<int>stack;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                stack.push(s[i]);
            else
            {
                if(stack.empty())
                    return false;
                else
                {
                    if(s[i]=='}')
                    {
                        if(stack.top()=='{')
                            stack.pop();
                        else
                            return false;
                    }
                    if(s[i]==']')
                    {
                        if(stack.top()=='[')
                            stack.pop();
                        else
                            return false;
                    }
                    if(s[i]==')')
                    {
                        if(stack.top()=='(')
                            stack.pop();
                        else
                            return false;
                    }     
                }
            }
            
        }
        if(stack.empty())
            return true;
        else
            return false;
    }
};
