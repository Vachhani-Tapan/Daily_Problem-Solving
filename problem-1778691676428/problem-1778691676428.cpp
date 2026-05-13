// Last updated: 5/13/2026, 10:31:16 PM
1class Solution {
2public:
3    vector<string> splitWordsBySeparator(vector<string>& words,
4                                         char separator) {
5        vector<string> res;
6        string word = "";
7        for (int i = 0; i < words.size(); i++) {
8            for (int j = 0; j < words[i].size(); j++) {
9                if (words[i][j] != separator) {
10                    word += words[i][j];
11                } else {
12                    if (word != "") {
13                        res.push_back(word);
14                        word = "";
15                    }
16                }
17            }
18            if (word != "") {
19                res.push_back(word);
20                word = "";
21            }
22        }
23        return res;
24    }
25};