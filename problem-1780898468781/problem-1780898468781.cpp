// Last updated: 6/8/2026, 11:31:08 AM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> res;
5        for (int i = 0; i < nums.size(); i++) {
6            int start = nums[i];
7            int end = start;
8            while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
9                end = nums[i+1];
10                i++;
11            }
12            if (start == end) {
13                res.push_back(to_string(start));
14            } else {
15                string range = to_string(start) + "->" + to_string(end);
16                res.push_back(range);
17            }
18        }
19        return res;
20    }
21};