// Last updated: 5/21/2026, 3:43:54 PM
1class Solution {
2public:
3    int minChanges(string s) {
4        int count = 0;
5        for (int i = 0; i < s.size() - 1; i += 2) {
6            if (s[i] != s[i + 1]) {
7                count++;
8            }
9        }
10        return count;
11    }
12};