bool rotateString(char* s, char* goal) {
    int i,j;
    char ch;
    for(i=0;s[i];i++)
    {
     if(strcmp(s,goal)==0)
     return true;
     ch=s[0];
     for(j=1;s[j];j++)
     {
        s[j-1]=s[j];
     }
     s[j-1]=ch;
     s[j]='\0';
    }
    return false;
}