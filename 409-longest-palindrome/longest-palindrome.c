int longestPalindrome(char* s) {
    int a[52]={0};
    int maxoddi=0,i,max=0,sum=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
        a[s[i]-'a']++;
        if(s[i]>='A' && s[i]<='Z')
        a[s[i]-39]++;
    }
for(i=0;i<52;i++)
{
    if(a[i]%2 && max<=a[i])
    {
    max=a[i];
    maxoddi=i;
    }
}
for(i=0;i<52;i++)
{
    if(a[i]%2==1 && i!=maxoddi)
    a[i]--;
}
for(i=0;i<52;i++)
{
    sum+=a[i];
}
return sum;
}
    
