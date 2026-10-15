char* reverseVowels(char* s) {
    int len=strlen(s)-1;
    int i=0;
    char t;
    while(i<len){
        while(i<len)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            break;
            i++;
        }
        while(i<len)
        {
            if(s[len]=='a'||s[len]=='e'||s[len]=='i'||s[len]=='o'||s[len]=='u'||s[len]=='A'||s[len]=='E'||s[len]=='I'||s[len]=='O'||s[len]=='U')
            break;
            len--;
        }
        if(i<len){
        t=s[i];
        s[i]=s[len];
        s[len]=t;
        
        i++;
        len--;
        }
    }
    return s;
}