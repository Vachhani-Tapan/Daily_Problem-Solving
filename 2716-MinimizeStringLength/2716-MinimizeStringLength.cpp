// Last updated: 5/12/2026, 7:54:56 AM
1class Solution {
2public:
3    int minimizedStringLength(string s) {
4        unordered_set<char> s1(s.begin(), s.end());
5        return s1.size();
6    }
7};