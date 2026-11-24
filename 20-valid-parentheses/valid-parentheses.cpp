class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int i;
        for(i=0;s[i];i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            a.push(s[i]);
            else if(a.size()==0)
            return false;

           else if(a.top()=='(' && s[i]==')'||
               a.top()=='[' && s[i]==']'||
               a.top()=='{' && s[i]=='}')
               a.pop();
            else 
            return false;
        }
        return a.size()==0;
    }
    
};