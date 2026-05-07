// Last updated: 5/7/2026, 11:50:09 AM
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        int b = 0;
5        int a = 0;
6        int l = 0;
7        int o = 0;
8        int n = 0;
9        for (auto k : text) {
10            if (k == 'b')
11                b++;
12            else if (k == 'a')
13                a++;
14            else if (k == 'l')
15                l++;
16            else if (k == 'o')
17                o++;
18            else if (k == 'n')
19                n++;
20        }
21        l = l / 2;
22        o = o / 2;
23        return min({b, a, l, o, n});
24    }
25};