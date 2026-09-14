char* countAndSay(int n) {

    
    char *s=malloc(10000), s1[10000];
    strcpy(s,"1");
    if (n == 1)
        return s;
    int cur, count, i, j, k;
    while (--n) {
        cur = s[0], count=0, k = 0;
        for (i =0; s[i]; i++) {
            if(s[i]==cur) count++;
            else
            {
              s1[k++]=count+'0';
              s1[k++]=cur;
              cur=s[i];
              count=1;
            }
             
        }
            s1[k++]=count+'0';
            s1[k++]=cur;
            s1[k]='\0';
        strcpy(s, s1);
        
    }
    return s;
}