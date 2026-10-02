int hammingWeight(int n) {
int i,c=0;
    for(i=0;i<32;i++)
    if(n>>i&1)
    c++;

return c;

    
}