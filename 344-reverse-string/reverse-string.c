void reverseString(char* s, int sSize) {
    int i=0;

    sSize--;
    for(i=0;i<sSize;i++,sSize--)
{
    
    s[sSize]=s[i]+s[sSize]-(s[i]=s[sSize]);
}
}