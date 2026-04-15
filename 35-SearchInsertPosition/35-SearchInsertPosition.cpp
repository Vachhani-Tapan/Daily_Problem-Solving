// Last updated: 4/15/2026, 6:08:33 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int s = 0;
5        int e = nums.size() - 1;
6        while (s <= e) {
7            int m = s + (e - s) / 2;
8            if (nums[m] == target) {
9                return m;
10            } else if (nums[m] < target) {
11                s = m + 1;
12            } else {
13                e = m - 1;
14            }
15        }
16        return s;
17    }
18};