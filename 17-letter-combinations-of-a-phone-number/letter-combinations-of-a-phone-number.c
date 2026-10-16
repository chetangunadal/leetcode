/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** letterCombinations(char* digits, int* returnSize)
{
    if(digits==NULL)
    {
   * returnSize=0;
   return NULL;
    }
    char *s[]={[2]="abc",[3]="def",[4]="ghi",[5]="jkl",[6]="mno",[7]="pqrs",[8]="tuv",[9]="wxyz"};
    int i,n=1,j;
    for(i=0;digits[i];i++)
        n*=strlen(s[digits[i]-48]);
    
    char **ans=malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    ans[i]=calloc(strlen(digits)+1,1);

int count=1,repeat,len;
char *p;
    for(i=0;digits[i];i++)
    {
        p=s[digits[i]-48];
        len=strlen(p);
        repeat=n/(len*count);
        for(j=0;j<n;j++)
        ans[j][i]=p[(j/repeat)%len];

        count*=len;    
    }
    //for(j=0;j<n;j++)
    //ans[j][i]='\0';
    * returnSize=n;
    return ans;
    
}