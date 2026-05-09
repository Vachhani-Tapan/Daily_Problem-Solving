// Last updated: 5/9/2026, 9:08:35 AM
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        k = k % nums.size();
5        reverse(nums.begin() , nums.end());
6        reverse(nums.begin() , nums.begin() + k);
7        reverse(nums.begin() + k , nums.end());
8    }
9};