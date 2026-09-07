double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {


int i=0,j=0,a[nums1Size+nums2Size],ele=0;
while(i<nums1Size && j<nums2Size)
  if(nums1[i]<nums2[j])
    a[ele++]=nums1[i++];
  else
    a[ele++]=nums2[j++];

    while(i<nums1Size)
    a[ele++]=nums1[i++];

    while(j<nums2Size)
    a[ele++]=nums2[j++];


  /*  ele=sizeof(a)/sizeof(a[0]); bububle short
    for(i=0;i<ele-1;i++)
    for(j=0;j<ele-1-i;j++)
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }*/
    if(ele%2)
    return(a[ele/2]);
    else
    return((a[ele/2]+a[ele/2-1])/2.0);
   }
    
