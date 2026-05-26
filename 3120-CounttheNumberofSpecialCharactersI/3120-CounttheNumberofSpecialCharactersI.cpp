// Last updated: 5/26/2026, 10:17:11 AM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        unordered_set<char> s1(word.begin(), word.end());
5        int count = 0;
6        for (int i = 'a'; i <= 'z'; i++) {
7            if (s1.count(i) && s1.count(i - 'a' + 'A')) {
8                count++;
9            }
10        }
11        return count;
12    }
13};