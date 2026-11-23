char* longestPalindrome(char* s) {

    int i,j,max=0,k,l;
    for(i=0;s[i];i++){
        k=i,l=i;
        while(k>=0 && s[k]==s[l] && l<strlen(s))
        k--,l++;
        if(max<(l-k-1))
        j=k+1,max=l-k-1;

        k=i,l=i+1;
        while(k>=0 && s[k]==s[l] && l<strlen(s))
        k--,l++;
        if(max<(l-k-1))
        j=k+1,max=l-k-1;
    }

    for(i=0;i<max;i++)
    s[i]=s[j+i];
    s[i]='\0';
    return s;
}