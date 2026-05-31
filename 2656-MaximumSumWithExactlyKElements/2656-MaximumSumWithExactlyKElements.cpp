// Last updated: 5/31/2026, 10:39:03 PM
1class Solution {
2public:
3    int maximizeSum(vector<int>& nums, int k) {
4        int sum = 0;
5        int n = *max_element(nums.begin(), nums.end());
6        while (k--) {
7            sum += n;
8            n = n + 1;
9        }
10        return sum;
11    }
12};