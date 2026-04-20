// Last updated: 4/20/2026, 4:15:38 PM
1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4        vector<char> chrs(s.size());
5        string res = "";
6        for(int i = 0 ; i < s.size() ; i++){
7            chrs[indices[i]] = s[i];
8        }
9        for(auto k : chrs){
10            res += k;
11        }
12        return res;
13    }
14};