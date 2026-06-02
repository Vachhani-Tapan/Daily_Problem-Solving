// Last updated: 6/2/2026, 3:12:46 PM
1class Solution {
2public:
3    int possibleStringCount(string word) {
4        int count = word.size();
5        for (int i = word.size() - 1; i > 0; i--) {
6            if (word[i] != word[i - 1]) {
7                count--;
8            }
9        }
10        return count;
11    }
12};