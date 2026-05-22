// Last updated: 5/22/2026, 10:25:17 AM
1class Solution {
2public:
3    string largestGoodInteger(string s) {
4        string res;
5        for (int i = 0; i < s.size() - 2; i++) {
6            if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
7                string str = s.substr(i, 3);
8                res = max(res, str);
9            }
10        }
11        return res;
12    }
13};