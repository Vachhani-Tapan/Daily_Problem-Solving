// Last updated: 5/1/2026, 8:44:41 AM
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int count = 0;
5        for (int i = 0; i < s.size() - 1; i++) {
6            char s1 = tolower(s[i]);
7            char s2 = tolower(s[i + 1]);
8            if (s1 != s2) {
9                count++;
10            }
11        }
12        return count;
13    }
14};