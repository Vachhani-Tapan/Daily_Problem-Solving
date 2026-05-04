// Last updated: 5/4/2026, 9:20:41 AM
1class Solution {
2public:
3    string removeStars(string s) {
4        string res = "";
5        for(auto k : s){
6            if(k != '*'){
7                res += k;
8            }
9            else{
10                res.pop_back();
11            }
12        }
13        return res;
14    }
15};