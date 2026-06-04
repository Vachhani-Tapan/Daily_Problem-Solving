// Last updated: 6/4/2026, 5:47:46 PM
1class Solution {
2public:
3    int distributeCandies(vector<int>& n) {
4        int types = 1;
5        sort(n.begin(), n.end());
6        for (int i = 1; i < n.size(); i++) {
7            if (n[i] != n[i - 1]) {
8                types++;
9            }
10        }
11        int siz = n.size() / 2;
12        return siz > types ? types : siz;
13    }
14};