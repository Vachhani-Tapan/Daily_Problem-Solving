// Last updated: 6/26/2026, 5:27:14 PM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int ans = 0;
5        int res = 0;
6        for(auto k : s){
7            if(k == '('){
8                ans++;
9                res = max(res,ans);
10            }
11            else if(k == ')'){
12                ans--;
13            }
14        }
15        return res;
16    }
17};