// Last updated: 6/5/2026, 11:18:30 AM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        // IMP TestCases : [10,1,10,10,10]  , [2,2,2,0,1,2]
5
6        int left = 0;
7        int right = nums.size() - 1;
8        while (left < right) {
9            int mid = (right + left) / 2;
10            if (nums[mid] > nums[right]) {
11                left = mid + 1;
12            } else if (nums[mid] < nums[right]) {
13                right = mid;
14            } else {
15                right--;
16            }
17        }
18        return nums[left];
19    }
20};