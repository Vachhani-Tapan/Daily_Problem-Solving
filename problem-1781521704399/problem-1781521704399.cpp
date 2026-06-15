// Last updated: 6/15/2026, 4:38:24 PM
1class Solution {
2public:
3    bool areNumbersAscending(string s) {
4        int prev = 0;
5        for (int i = 0; i < s.size(); i++) {
6            if (isdigit(s[i])) {
7                int n = 0;
8                while (i < s.size() && isdigit(s[i])) {
9                    n = n * 10 + (s[i] - '0');
10                    i++;
11                }
12                if (n <= prev) {
13                    return false;
14                }
15                prev = n;
16            }
17        }
18        return true;
19    }
20};