int missingNumber(int* nums, int numsSize) {
    int n=numsSize+1;
n=0;
int sum=0;
for(int i=0;i<numsSize;i++){
    sum+=nums[i];
    n+=(i+1);
}
return n-sum;
}