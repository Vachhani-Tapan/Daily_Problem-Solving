// Last updated: 5/6/2026, 4:36:05 PM
1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> s1(nums1.begin(), nums1.end());
5        unordered_set<int> s2(nums2.begin(), nums2.end());
6        vector<int> v1, v2;
7        for (auto k : s1) {
8            if (s2.find(k) == s2.end()) {
9                v1.push_back(k);
10            }
11        }
12        for (auto k : s2) {
13            if (s1.find(k) == s1.end()) {
14                v2.push_back(k);
15            }
16        }
17        return {v1, v2};
18    }
19};