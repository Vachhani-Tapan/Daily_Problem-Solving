// Last updated: 5/7/2026, 3:46:19 PM
1class Solution {
2public:
3    bool isAcronym(vector<string>& words, string s) {
4        string res = "";
5        for(int i = 0 ; i < words.size() ; i++){
6            res += words[i][0];
7        }
8        return res == s;
9    }
10};