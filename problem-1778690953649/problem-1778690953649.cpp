// Last updated: 5/13/2026, 10:19:13 PM
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4        // s = "a##c"   t = "#a#c"   refer this testcase also
5
6        for (int i = 0; i < s.size(); i++) {
7            if (s[i] == '#') {
8                if (i == 0) {
9                    s.erase(i, 1);
10                    i--;
11                } else {
12                    s.erase(i - 1, 2);
13                    i -= 2;
14                }
15            }
16        }
17        for (int i = 0; i < t.size(); i++) {
18            if (t[i] == '#') {
19                if (i == 0) {
20                    t.erase(i, 1);
21                    i--;
22                } else {
23                    t.erase(i - 1, 2);
24                    i -= 2;
25                }
26            }
27        }
28        return s == t;
29    }
30};