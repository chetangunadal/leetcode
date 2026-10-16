int lengthOfLongestSubstring(char* s) {
    if(s==NULL)
    return 0;
    int i,max=0,c=0,j;
    for(i=0;s[i];i++){
        int a[128]={0};
        c=0;
        for(j=i;s[j];j++)
        {
            
            if(a[s[j]]==0){
                c++;
                a[s[j]]++;
            }
            else
            break;
        }
        if(c>max)
        max=c;
    }
    return max;
}