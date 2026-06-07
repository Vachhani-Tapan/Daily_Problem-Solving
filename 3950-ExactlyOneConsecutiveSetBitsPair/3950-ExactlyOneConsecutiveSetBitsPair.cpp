// Last updated: 6/7/2026, 10:33:24 AM
1class Solution {
2public:
3    bool consecutiveSetBits(int n) {
4        if (n == 0 || n == 1)
5            return false;
6        string s = "";
7        while (n) {
8            s += n % 2 + '0';
9            n /= 2;
10        }
11        int count = 0;
12        for (int i = 0; i < s.size() - 1; i++) {
13            if (s[i] == '1' && s[i + 1] == '1') {
14                count++;
15            }
16        }
17        return count == 1;
18    }
19};