int searchInsert(int* nums, int numsSize, int target) 
{
    int l=0,h=numsSize-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(target==nums[mid] )
        {
        return mid;
        }
        else if(target<nums[mid])
        h=mid-1;
        else 
        l=mid+1;
    }
    return l;
}
    
