char* longestPalindrome(char* s)
{
    int i,k,l,max=0,st;
    for(i=0;s[i];i++)
    {
     k=i,l=i;
     while(k>=0 && s[k]==s[l] && l<strlen(s))
     k--,l++;
     if((l-k-1)>max){
        max=l-k-1;
        st=k+1;
     }
     k=i,l=i+1;
     while(k>=0 && s[k]==s[l] && l<strlen(s))
     k--,l++;
     if((l-k-1)>max){
        max=l-k-1;
        st=k+1;
     }
    }
    char *ans=malloc(sizeof(char)*(max+1));
    strncpy(ans,s+st,max);
    ans[max]='\0';
    return ans;
    
}