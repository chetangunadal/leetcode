int sumCounts(int* nums, int numsSize) {
    int i,j,c,res=0;
    for(i=0;i<numsSize;i++){
        int a[101]={0};
        c=0;
        
        for(j=i;j<numsSize;j++){
        if(a[nums[j]]==0){
            a[nums[j]]=1;
            c++;
        }
        res+=c*c;
    }
    }
    return res;
}