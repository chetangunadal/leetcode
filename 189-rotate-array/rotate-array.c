void rotate(int* nums, int numsSize, int k) {
   k=k%numsSize;
   int i=0,*p=nums;
   int a[numsSize];
   for(i=0;i<k;i++)
   a[i]=nums[numsSize-k+i];
   for(i=0;i<numsSize-k;i++)
   a[k+i]=nums[i];

   for(i=0;i<numsSize;i++)
   nums[i]=a[i];
}