class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int>s;
int i;
        for(i=0;i<m&&i<n;i++){
            s.insert(nums1[i]);
            s.insert(nums2[i]);
        }
        while(i<m){
            s.insert(nums1[i]);
            i++;
        }
        while(i<n){
            s.insert(nums2[i]);
            i++;
        }
        i=0;
        for(auto x:s)
        {
            nums1[i]=x;
            i++;
        }
    }
};