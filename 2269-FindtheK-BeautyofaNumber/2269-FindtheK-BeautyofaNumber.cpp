// Last updated: 5/12/2026, 10:11:14 PM
1class Solution {
2public:
3    int divisorSubstrings(int num, int k) {
4        int count = 0;
5        string s = to_string(num);
6        for (int i = 0; i <= s.size() - k; i++) {
7            int n = stoi(s.substr(i, k));
8            if (n != 0 && num % n == 0) {
9                count++;
10            }
11        }
12        return count;
13    }
14};