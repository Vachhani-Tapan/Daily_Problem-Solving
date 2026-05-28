// Last updated: 5/28/2026, 2:08:24 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        if (s.size() % 2 != 0)
5            return false;
6        stack<char> s1;
7        for (char k : s) {
8            if (k == '(' || k == '{' || k == '[') {
9                s1.push(k);
10            } else {
11                if(s1.empty()) return false;
12
13                char top = s1.top();
14
15                if (k == ')' && top != '(') return false;
16                if (k == '}' && top != '{') return false;
17                if (k == ']' && top != '[') return false;
18
19                s1.pop();
20            }
21        }
22        return s1.empty();
23    }
24};