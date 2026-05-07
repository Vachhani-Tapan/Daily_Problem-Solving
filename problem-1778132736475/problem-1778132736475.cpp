// Last updated: 5/7/2026, 11:15:36 AM
1class Solution {
2public:
3    int maxDifference(string s) {
4        unordered_map<char, int> m1;
5        for (auto k : s) {
6            m1[k]++;
7        }
8        int maxi = INT_MIN;
9        int mini = INT_MAX;
10        for (auto k : m1) {
11            if (k.second % 2 != 0 && k.second > maxi) {
12                maxi = k.second;
13            }
14            if (k.second % 2 == 0 && k.second < mini) {
15                mini = k.second;
16            }
17        }
18        return maxi - mini;
19    }
20};