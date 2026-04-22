// Last updated: 4/22/2026, 5:46:43 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        string res = "";
5        string word = "";
6        for (int i = 0; i < s.size(); i++) {
7            if (s[i] != ' ') {
8                word += s[i];
9            } else {
10                reverse(word.begin(), word.end());
11                res += ' ' +  word;
12                word = "";
13            }
14        }
15        reverse(word.begin(), word.end());
16        res += ' ' + word;
17        return res.substr(1);
18    }
19};