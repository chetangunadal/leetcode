bool isIsomorphic(char* s, char* t) {
    int a[128]={0},b[128]={0};
    int i;
    for(i=0;s[i];i++){
        if(a[s[i]]!=b[t[i]])
        return false;
        a[s[i]]=i+1;
        b[t[i]]=i+1;


    }
    return true;
}