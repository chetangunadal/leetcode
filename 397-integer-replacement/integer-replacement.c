int integerReplacement(int n) {
    long n1=n;
    int i=0;
    while(n1!=1){
        if(n1%2)
        {
            if(n1==3||n1%4==1)
            n1--;
            else
          n1++;
        }
        else
        n1/=2;
        i++;
    }
    return i;
}