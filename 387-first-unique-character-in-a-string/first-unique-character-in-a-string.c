int firstUniqChar(char* s) {
    int a[26]={0},i;
    for(i=0;s[i];i++){
        a[s[i]-'a']++;
    }
    for(i=0;s[i];i++){
    if(a[s[i]-'a']==1)
    return i;
}
return -1;
}