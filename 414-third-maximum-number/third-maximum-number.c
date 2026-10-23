int thirdMax(int* nums, int numsSize) {
    long int l=LLONG_MIN, sl=LLONG_MIN, tl = LLONG_MIN,i;
   
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == l || nums[i] == sl || nums[i] == tl)
            continue;
        if (nums[i] > l) {
            tl = sl;
            sl = l;
            l = nums[i];
        } else if (nums[i] > sl ) {
            tl = sl;
            sl = nums[i];
        } else if (nums[i] > tl ) {
            tl = nums[i];
        }
    }
    if(tl==LLONG_MIN)
    return l;
    return tl;
}