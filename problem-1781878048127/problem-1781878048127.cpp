// Last updated: 6/19/2026, 7:37:28 PM
1class Solution {
2public:
3    vector<int> intersection(vector<vector<int>>& nums) {
4        vector<int> freq(1001 , 0);
5        for (int i = 0; i < nums.size(); i++) {
6            for (int j = 0; j < nums[i].size(); j++) {
7                freq[nums[i][j]]++;
8            }
9        }
10        vector<int> res;
11        int n = nums.size();
12        for (int i = 1 ; i <= 1000 ; i++) {
13            if (freq[i] == n) {
14                res.push_back(i);
15            }
16        }
17        return res;
18    }
19};