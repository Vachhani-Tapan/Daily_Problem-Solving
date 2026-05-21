// Last updated: 5/21/2026, 3:54:32 PM
1class Solution {
2public:
3    int minimumFlips(int n) {
4        string s = "";
5        while (n) {
6            s += (n % 2) + '0';
7            n /= 2;
8        }
9        int i = 0;
10        int j = s.size() - 1;
11        int count = 0;
12        while (i < j) {
13            if (s[i] != s[j]) {
14                count++;
15            }
16            i++;
17            j--;
18        }
19        return count * 2;
20    }
21};