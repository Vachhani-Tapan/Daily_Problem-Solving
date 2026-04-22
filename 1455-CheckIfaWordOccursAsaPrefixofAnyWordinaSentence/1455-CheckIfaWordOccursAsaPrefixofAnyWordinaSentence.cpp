// Last updated: 4/22/2026, 6:06:37 PM
1class Solution {
2public:
3    int isPrefixOfWord(string sentence, string searchWord) {
4        string word = "";
5        int count = 1;
6        for (int i = 0; i < sentence.size(); i++) {
7            if (sentence[i] != ' ') {
8                word += sentence[i];
9            } else {
10                if (word.substr(0, searchWord.size()) == searchWord) {
11                    return count;
12                }
13                count++;
14                word = "";
15            }
16        }
17        if (word.substr(0, searchWord.size()) == searchWord) {
18            return count;
19        }
20        return -1;
21    }
22};