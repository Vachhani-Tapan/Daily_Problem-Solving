// Last updated: 5/21/2026, 3:37:27 PM
1class Solution {
2public:
3    string generateTheString(int n) {
4        if (n % 2 == 0) {
5            return string(n - 1, 'a') + 'b';
6        } else {
7            return string(n, 'a');
8        }
9    }
10};