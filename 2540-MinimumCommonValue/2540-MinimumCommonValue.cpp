// Last updated: 5/19/2026, 8:53:39 AM
1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int i = 0;
5        int j = 0;
6        while(i < nums1.size() && j < nums2.size()){
7            if(nums1[i] == nums2[j]){
8                return nums1[i];
9            }
10            else if(nums1[i] > nums2[j]){
11                j++;
12            }
13            else{
14                i++;
15            }
16        }
17        return -1;
18    }
19};