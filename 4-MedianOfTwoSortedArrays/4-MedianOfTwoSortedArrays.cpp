// Last updated: 4/15/2026, 10:50:04 AM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        int id = 0;
        vector<int> res(m+n);
        while(i < m && j < n){
            if(nums1[i] >= nums2[j]){
                res[id] = nums2[j];
                id++;
                j++;
            }
            else {
                res[id] = nums1[i];
                i++;
                id++;
            }
        }
        while(i < m){
            res[id] = nums1[i];
            id++;
            i++;
        }
        while(j < n){
            res[id] = nums2[j];
            id++;
            j++;
        }
        int size = res.size();
        if (size % 2 != 0)
            return res[res.size() / 2];
        return (res[res.size() / 2] + res[res.size() / 2 - 1]) / 2.0;
    }
};