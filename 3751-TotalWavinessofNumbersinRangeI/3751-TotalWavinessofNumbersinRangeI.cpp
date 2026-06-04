// Last updated: 6/4/2026, 11:34:22 AM
1class Solution {
2public:
3    int totalWaviness(int num1, int num2) {
4        int count = 0;
5        if (num2 < 100)
6            return false;
7        for (int i = num1; i <= num2; i++) {
8            int n = i;
9            string s = "";
10            while (n) {
11                int a = n % 10;
12                char c = a + '0';
13                s += c;
14                n /= 10;
15            }
16            for (int i = 1; i < s.size() - 1; i++) {
17                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
18                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
19                    count++;
20                }
21            }
22        }
23        return count;
24    }
25};