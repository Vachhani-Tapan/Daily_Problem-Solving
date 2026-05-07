// Last updated: 5/7/2026, 11:54:10 AM
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        if (word.size() == 1)
5            return true;
6
7        int count = 0;
8        for (auto k : word) {
9            if (isupper(k)) {
10                count++;
11            }
12        }
13        if (count == 1 && isupper(word[0]))
14            return true;
15        if (count == 0 || count == word.size())
16            return true;
17        else
18            return false;
19    }
20};