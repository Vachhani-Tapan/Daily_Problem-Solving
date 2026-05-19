// Last updated: 5/19/2026, 6:48:10 PM
1class Solution {
2public:
3    int minSteps(string s, string t) {
4        vector<int> v1(26, 0);
5        for (auto k : s) {
6            v1[k - 'a']++;
7        }
8        for (auto k : t) {
9            v1[k - 'a']--;
10        }
11        int ans = 0;
12        for (auto k : v1) {
13            ans += abs(k);
14        }
15        return ans / 2;
16    }
17};