// Last updated: 5/7/2026, 10:25:01 AM
1class Solution {
2public:
3    bool hasSameDigits(string s) {
4        while (s.size() > 2) {
5            string res = "";
6            for (int i = 1; i < s.size(); i++) {
7                res += (s[i] + s[i - 1]) % 10 + '0';
8            }
9            s = res;
10        }
11        return s[0] == s[1];
12    }
13};