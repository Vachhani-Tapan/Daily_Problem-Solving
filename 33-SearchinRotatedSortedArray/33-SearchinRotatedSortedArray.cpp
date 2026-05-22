// Last updated: 5/22/2026, 9:08:39 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size() - 1;
6        while (start <= end) {
7            int mid = start + (end - start) / 2;
8            if (nums[mid] == target) {
9                return mid;
10            }
11
12            // left is sorted
13            if (nums[mid] >= nums[start]) {
14                if (target >= nums[start] && target <= nums[mid]) {
15                    end = mid - 1;
16                } else {
17                    start = mid + 1;
18                }
19            }
20
21            // right is sorted
22            else {
23                if (target >= nums[mid] && target <= nums[end]) {
24                    start = mid + 1;
25                } else {
26                    end = mid - 1;
27                }
28            }
29        }
30        return -1;
31    }
32};