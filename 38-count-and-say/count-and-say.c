char* countAndSay(int n) {
    char *s=calloc(1,5000),p[5000];
    strcpy(s,"1");
    if(n==1)
    return s;
    int c,k,ch,i;
    while(--n){
        ch=s[0],c=0,k=0;
        for(i=0;s[i];i++){
            if(ch==s[i]) c++;
            else
            {
                p[k++]=c+48;
                p[k++]=s[i-1];
                ch=s[i];
                c=1;
            }
        }
         p[k++]=c+48;
                p[k++]=s[i-1];
                p[k]='\0';
                strcpy(s,p);
    }
    return s;
}