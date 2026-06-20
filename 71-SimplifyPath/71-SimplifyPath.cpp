// Last updated: 6/20/2026, 9:22:50 PM
1class Solution {
2public:
3    string simplifyPath(string path) {
4        stack<string> stk;
5        string temp;
6        for (int i = 0; i <= path.size(); i++) {
7            if (i == path.size() || path[i] == '/') {
8
9                if (temp == "" || temp == ".") {
10 
11                } else if (temp == "..") {
12                    if (!stk.empty()) {
13                        stk.pop();
14                    }
15                } else {
16                    stk.push(temp);
17                }
18
19                temp = "";
20            } else {
21                temp += path[i];
22            }
23        }
24
25        if(stk.empty()){
26            return "/";
27        }
28
29        string res = "";
30        while (!stk.empty()) {
31            res = "/" + stk.top() + res;
32            stk.pop();
33        }
34
35        return res;
36    }
37};