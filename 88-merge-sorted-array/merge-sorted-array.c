void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = 0, j = 0, k = 0, a[m + n];
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            a[k++] = nums1[i++];
        else
            a[k++] = nums2[j++];
    }
    while(i<m)
    a[k++]=nums1[i++];

    while(j<n)
    a[k++]=nums2[j++];

    for(i=0;i<(m+n);i++)
    nums1[i]=a[i];
}