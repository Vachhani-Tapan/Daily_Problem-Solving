// Last updated: 6/16/2026, 9:15:23 AM
1class Solution {
2public:
3    string processStr(string s) {
4        string res = "";
5        for(auto k : s){
6            if(isalpha(k)){
7                res += k;
8            }
9            else if(k == '%'){
10                reverse(res.begin() , res.end());
11            }
12            else if(k == '#'){
13                res = res + res;
14            }
15            else if(res.size() > 0 && k == '*'){
16                res.pop_back();
17            }
18        }
19        return res;
20    }
21};