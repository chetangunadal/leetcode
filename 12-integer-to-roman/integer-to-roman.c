char* intToRoman(int num) {
    
    char *s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int  n[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
char p[20]="\0";
int i=0,j=0;
    while(num){
        while(num>=n[i]){
            strcat(p,s[i]);
            num-=n[i];
        }
      i++;
    }

    char *m=malloc(strlen(p)+1);
    strcpy(m,p);
    return m;
}