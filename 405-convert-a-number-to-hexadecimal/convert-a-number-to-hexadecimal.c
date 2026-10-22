char* toHex(int num) {
    if(num==0)
    return "0";
    char *p=calloc(1,100);
    int i=0;
    unsigned int n=num;
    char hex[]="0123456789abcdef";
    while(n){
        p[i++]=hex[n&15];
        n>>=4;
    }
    i--;
    char t;
    for(int j=0;j<i;j++,i--)
    {
        t=p[i];
        p[i]=p[j];
        p[j]=t;
    }
    return p;
}