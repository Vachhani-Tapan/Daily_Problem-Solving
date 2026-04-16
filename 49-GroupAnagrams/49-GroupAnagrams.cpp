// Last updated: 4/16/2026, 2:00:57 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> m1;
5        for (auto k : strs) {
6            string word = k;
7            sort(word.begin(), word.end());
8            m1[word].push_back(k);
9        }
10        vector<vector<string>> v1;
11        for (auto k : m1) {
12            v1.push_back(k.second);
13        }
14        return v1;
15    }
16};