void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int i = 0, a[100000], l = numsSize - k;

    while (i < l) {
        a[i] = nums[i];
        i++;
    }

    i = 0;
    while (i < k) {
        nums[i] = nums[l + i];
        i++;
    }
    int t = 0;
    while (i < numsSize) {
        nums[i] = a[t];
        t++, i++;
    }
}