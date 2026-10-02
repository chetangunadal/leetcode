int reverseBits(int n) {
    int a,b,i,j;
    for(i=0, j=31;i<j;i++,j--){
        a=n>>i&1;
        b=n>>j&1;
        if(a!=b)
        {
            n=n^(1<<i);
            n=n^(1<<j);
        }
    }
    return n;
}