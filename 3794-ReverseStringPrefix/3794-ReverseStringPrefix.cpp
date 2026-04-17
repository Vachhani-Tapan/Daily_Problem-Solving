// Last updated: 4/17/2026, 5:33:42 PM
1class Solution {
2public:
3    string reversePrefix(string s, int k) {
4        reverse(s.begin() , s.begin() + k);
5        return s;
6    }
7};