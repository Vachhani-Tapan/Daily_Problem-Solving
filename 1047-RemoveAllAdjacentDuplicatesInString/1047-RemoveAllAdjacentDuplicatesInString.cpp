// Last updated: 5/22/2026, 9:46:42 AM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string res;
5        for (int i = 0; i < s.size(); i++) {
6            int n = res.size();
7            if (n >= 1 && res[n - 1] == s[i]) {
8                res.pop_back();
9            } else {
10                res += s[i];
11            }
12        }
13        return res;
14    }
15};