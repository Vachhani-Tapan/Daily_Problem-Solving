// Last updated: 4/25/2026, 9:31:10 AM
1class Solution {
2public:
3    string toLowerCase(string s) {
4        for (int i = 0 ; i < s.size() ; i++) {
5            if (isupper(s[i])) {
6                s[i] = tolower(s[i]);
7            }
8        }
9        return s;
10    }
11};