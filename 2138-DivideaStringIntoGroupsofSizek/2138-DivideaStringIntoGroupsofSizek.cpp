// Last updated: 5/21/2026, 4:26:25 PM
1class Solution {
2public:
3    vector<string> divideString(string s, int k, char fill) {
4        vector<string> res;
5        for(int i = 0 ; i < s.size() ; i += k){
6            string t = s.substr(i , k);
7            while(t.size() < k){
8                t += fill;
9            }
10            res.push_back(t);
11        }
12        return res;
13    }
14};