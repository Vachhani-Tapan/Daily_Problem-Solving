// Last updated: 5/18/2026, 3:01:16 PM
1class Solution {
2public:
3    vector<string> stringMatching(vector<string>& words) {
4        vector<string> res;
5        for (int i = 0; i < words.size(); i++) {
6            for (int j = 0; j < words.size(); j++) {
7                if (i != j && words[j].find(words[i]) != string::npos) {
8                    res.push_back(words[i]);
9                    break;
10                }
11            }
12        }
13        return res;
14    }
15};