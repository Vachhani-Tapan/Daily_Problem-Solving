// Last updated: 4/20/2026, 3:50:21 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& s) {
4        int siz = 0;
5        for (int i = 0; i < s.size(); i++) {
6            int count = 1;
7            for (int j = 0; j < s[i].size(); j++) {
8                if (s[i][j] == ' ') {
9                    count++;
10                }
11            }
12            siz = max(siz, count);
13        }
14        return siz;
15    }
16};