// Last updated: 5/5/2026, 9:22:58 PM
1class Solution {
2public:
3    vector<int> findPeaks(vector<int>& mountain) {
4        vector<int> v1;
5        for (int i = 1; i < mountain.size() - 1; i++) {
6            if (mountain[i] > mountain[i - 1] &&
7                mountain[i] > mountain[i + 1]) {
8                v1.push_back(i);
9            }
10        }
11        return v1;
12    }
13};