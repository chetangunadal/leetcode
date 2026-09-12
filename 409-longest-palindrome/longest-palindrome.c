int longestPalindrome(char* s) {
    int a[52]={0};
    int i,f=1,sum=0,oddi;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
        a[s[i]-'a']++;
        if(s[i]>='A' && s[i]<='Z')
        a[s[i]-39]++;
    }
for(i=0;i<52;i++)
{
    if(a[i]%2 && f)
    {
        f=0;
        oddi=i;
    }
    if(a[i]%2 && oddi!=i)
    a[i]--;
    sum+=a[i];
}
    
return sum;
}
    
