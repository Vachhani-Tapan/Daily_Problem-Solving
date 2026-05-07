// Last updated: 5/7/2026, 4:05:21 PM
1class Solution {
2public:
3    int countPartitions(vector<int>& nums) {
4        int totalSum = 0;
5        for (auto k : nums) {
6            totalSum += k;
7        }
8        int runSum = 0;
9        int count = 0;
10        for (int i = 0; i < nums.size() - 1; i++) {
11            runSum += nums[i];
12            int rightSum = totalSum - runSum;
13            if ((runSum - rightSum) % 2 == 0) {
14                count++;
15            }
16        }
17        return count;
18    }
19};