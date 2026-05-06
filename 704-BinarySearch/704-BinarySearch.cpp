// Last updated: 5/6/2026, 3:39:17 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l = 0;
5        int r = nums.size() - 1;
6        while (l <= r) {
7            int mid = l + (r - l) / 2;
8            if (nums[mid] == target) {
9                return mid;
10            } else if (nums[mid] < target) {
11                l = mid + 1;
12            } else {
13                r = mid - 1;
14            }
15        }
16        return -1;
17    }
18};