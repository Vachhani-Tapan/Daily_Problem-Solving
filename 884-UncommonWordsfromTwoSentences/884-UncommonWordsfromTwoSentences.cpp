// Last updated: 5/5/2026, 11:53:50 AM
1class Solution {
2public:
3    vector<string> uncommonFromSentences(string s1, string s2) {
4        unordered_map<string, int> m1;
5        string word = "";
6        for (int i = 0; i < s1.size(); i++) {
7            if (s1[i] != ' ') {
8                word += s1[i];
9            } else {
10                m1[word]++;
11                word = "";
12            }
13        }
14        if(word != ""){
15            m1[word]++;
16            word = "";
17        }
18        for (int i = 0; i < s2.size(); i++) {
19            if (s2[i] != ' ') {
20                word += s2[i];
21            } else {
22                m1[word]++;
23                word = "";
24            }
25        }
26        if(word != ""){
27            m1[word]++;
28            word = "";
29        }
30        vector<string> v1;
31        for (auto k : m1) {
32            if (k.second == 1) {
33                v1.push_back(k.first);
34            }
35        }
36        return v1;
37    }
38};