void reverseString(char* s, int sSize) {
    int i=0;
    char t;
    sSize--;
    for(i=0;i<sSize;i++,sSize--)
{
    t=s[i];
    s[i]=s[sSize];
    s[sSize]=t;
}
}