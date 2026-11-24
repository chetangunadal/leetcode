bool isValid(char* s) {
    int i,j=0,k;
    char p[strlen(s)+1];
    for(i=0;s[i];i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
         p[j++]=s[i];   
        }
        else if(j==0)
        return false;
        else if(p[j-1]=='(' && s[i]==')'||
                 p[j-1]=='[' && s[i]==']'||
                 p[j-1]=='{'&&s[i]=='}')
                 {
                    j--;
                 }
                 else
                 return false;

    }
    
 return j==0;   
}