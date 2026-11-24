bool isValid(char* s) {
    int i,j=0,k;
    char p[strlen(s)+1];
    for(i=0;s[i];i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            k=j;
         p[j++]=s[i];   
        }
        else if(j==0)
        return false;
        else if(p[k]=='(' && s[i]==')'||
                 p[k]=='[' && s[i]==']'||
                 p[k]=='{'&&s[i]=='}')
                 {
                    j--;
                    k--;
                 }
                 else
                 return false;

    }
    
 return j==0;   
}