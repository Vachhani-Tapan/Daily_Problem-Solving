// Last updated: 6/4/2026, 9:44:30 AM
1class Solution {
2public:
3    int mostFrequent(vector<int>& nums, int key) {
4        int ans = 0;
5        int maxCount = 0;
6        unordered_map<int, int> freq;
7        for (int i = 0; i < nums.size() - 1; i++) {
8            if (nums[i] == key) {
9                int target = nums[i + 1];
10                freq[target]++;
11                if (freq[target] > maxCount) {
12                    maxCount = freq[target];
13                    ans = target;
14                }
15            }
16        }
17        return ans;
18    }
19};