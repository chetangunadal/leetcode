int lengthOfLastWord(char* s) {
    int len=strlen(s)-1;
    int c=0;
    while(s[len]==' ')
    len--;
    while(len>=0 && s[len]!=' ')
    {
c++;
len--;
    }
    return c;
}