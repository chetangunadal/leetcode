char findTheDifference(char* s, char* t) {
    int i,s1=0,s2=0;
    for(i=0;s[i];i++)
    s1+=s[i];
     for(i=0;t[i];i++)
    s2+=t[i];
s1=s1-s2;
if(s1<0)
return (char)-s1;
else
return (char)s1;
}