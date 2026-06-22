// Last updated: 6/22/2026, 9:32:25 PM
1class Solution {
2public:
3    int maxScore(vector<int>& nums, int k) {
4        int leftSum = 0;
5        int rightSum = 0;
6        for (int i = 0; i < k; i++) {
7            leftSum += nums[i];
8        }
9        int idx = nums.size() - 1;
10        int maxSum = leftSum;
11        for (int i = k - 1; i >= 0; i--) {
12            leftSum -= nums[i];
13            rightSum += nums[idx];
14            idx--;
15            maxSum = max(maxSum, leftSum + rightSum);
16        }
17        return maxSum;
18    }
19};