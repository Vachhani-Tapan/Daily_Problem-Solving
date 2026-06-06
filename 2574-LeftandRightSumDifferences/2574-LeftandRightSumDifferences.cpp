// Last updated: 6/6/2026, 8:00:17 AM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        int rightSum = 0;
5        int leftSum = 0;
6        for (auto k : nums) {
7            rightSum += k;
8        }
9        vector<int> res;
10        for (int i = 0; i < nums.size(); i++) {
11            rightSum -= nums[i];
12            res.push_back(abs(rightSum - leftSum));
13            leftSum += nums[i];
14        }
15        return res;
16    }
17};