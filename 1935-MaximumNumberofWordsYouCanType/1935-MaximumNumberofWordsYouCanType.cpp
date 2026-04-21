// Last updated: 4/21/2026, 4:16:44 PM
1class Solution {
2public:
3    int canBeTypedWords(string text, string brokenLetters) {
4        unordered_set<char> s1(brokenLetters.begin(), brokenLetters.end());
5        int count = 0;
6        bool isType = true;
7        for (int i = 0; i < text.size(); i++) {
8            if (text[i] != ' ') {
9                if (s1.find(text[i]) != s1.end()) {
10                    isType = false;
11                }
12            } else {
13                if (isType) {
14                    count++;
15                }
16                isType = true;
17            }
18        }
19        if(isType) count++;
20        return count;
21    }
22};