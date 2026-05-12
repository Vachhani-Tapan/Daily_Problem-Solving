// Last updated: 5/12/2026, 8:13:24 AM
1class Solution {
2public:
3    bool isSumEqual(string w1, string w2, string targetWord) {
4        int s1 = 0;
5        int s2 = 0;
6        int st = 0;
7        for (auto k : w1) {
8            s1 = (s1 * 10) + (k - 'a');
9        }
10        for (auto k : w2) {
11            s2 = (s2 * 10) + (k - 'a');
12        }
13        for (auto k : targetWord) {
14            st = (st * 10) + (k - 'a');
15        }
16        return (s1 + s2) == st;
17    }
18};