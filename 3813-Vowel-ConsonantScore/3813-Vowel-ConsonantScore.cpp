// Last updated: 4/27/2026, 8:55:59 AM
1class Solution {
2public:
3    int vowelConsonantScore(string s) {
4        int vow = 0;
5        int con = 0;
6        for (auto ch : s) {
7            if (ch >= 'a' && ch <= 'z') {
8                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
9                    ch == 'u') {
10                        vow++;
11                }
12                else{
13                    con++;
14                }
15            }
16        }
17        if(con == 0) return 0;
18        return vow / con;
19    }
20};