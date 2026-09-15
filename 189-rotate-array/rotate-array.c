void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int i = 0, a[100000], l = numsSize - k;
    i = 0;
    while ((i < k)||(i<l)) {
        if(i<l){
         a[i] = nums[i];
        }
        if(i < k){
        nums[i] = nums[l + i];
        }
        i++;
    }
    i=k;
    int t = 0;
    while (i < numsSize) {
        nums[i] = a[t];
        t++, i++;
    }
}