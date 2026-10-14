/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int c=0,i=0;
    int *a=calloc(n+1,sizeof(int));
    while(i<=n){
        c=0;
        for(int k=31;k>=0;k--)
        if((i>>k)&1)
        c++;
        a[i++]=c;
    }
   *returnSize=i;
    return a;
}