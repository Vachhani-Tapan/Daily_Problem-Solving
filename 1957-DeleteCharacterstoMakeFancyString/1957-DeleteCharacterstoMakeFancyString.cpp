// Last updated: 5/22/2026, 9:35:40 AM
1class Solution {
2public:
3    string makeFancyString(string s) {
4        // here in this question we can not use te erase() property because it itself takes o(n) line so overall become o(n2) which will give the tle error.
5        if (s.size() < 3) {
6            return s;
7        }
8        string res;
9        for (auto k : s) {
10            int n = res.size();
11            if (n >= 2 && res[n - 1] == k && res[n - 2] == k) {
12                continue;
13            }
14            res += k;
15        }
16        return res;
17    }
18};