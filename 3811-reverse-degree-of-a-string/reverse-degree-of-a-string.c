int reverseDegree(char* s) {
    char a[128];
    int i;
    for(i=0;i<26;i++)
    a['a'+i]=26-i;
int sum=0;
    for(i=0;s[i];i++){
sum+=(i+1)*a[s[i]];
    }
    return sum;
}