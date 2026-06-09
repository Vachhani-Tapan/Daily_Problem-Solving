// Last updated: 6/9/2026, 4:49:45 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int isopen = 0;
5        string res = "";
6        for(auto k : s){
7            if(k == '('){
8                if(isopen > 0) res += k;
9                isopen++;
10            }
11            else{
12                isopen--;
13                if(isopen > 0) res += k;
14            }
15        }
16        return res;
17    }
18};