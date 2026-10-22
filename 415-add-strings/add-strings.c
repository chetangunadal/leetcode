char* addStrings(char* num1, char* num2) {

    int i=strlen(num1)-1;
    int j=strlen(num2)-1;
    char *p=calloc(1,fmax(i,j)+3);
    int m=0;
    int sum,carry=0;
    while(i>=0||j>=0||carry){
        sum=carry;
        if(i>=0)
        sum+=num1[i--]-'0';
        if(j>=0)
        sum+=num2[j--]-'0';
        carry=sum/10;
        p[m++]=sum%10+'0';
    }
    for(i=0,j=m-1;i<j;i++,j--)
    {
        m=p[i];
        p[i]=p[j];
        p[j]=m;
    }
    return p;
}