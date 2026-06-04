// Last updated: 6/4/2026, 3:04:13 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while(l < r){
7            int mid = (l + r) / 2;
8            if(nums[mid] > nums[r]){
9                l = mid + 1;
10            } 
11            else{
12                r = mid;
13            }
14        }
15        return nums[l];
16    }
17};