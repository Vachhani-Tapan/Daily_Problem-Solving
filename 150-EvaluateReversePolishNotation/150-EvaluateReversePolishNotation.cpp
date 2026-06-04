// Last updated: 6/4/2026, 1:08:13 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> stk;
5        for(auto k : tokens){
6            if(k == "+"){
7                int f = stk.top();
8                stk.pop();
9                int s = stk.top();
10                stk.pop();
11                stk.push(s + f);
12            }
13            else if(k == "-"){
14                int f = stk.top();
15                stk.pop();
16                int s = stk.top();
17                stk.pop();
18                stk.push(s - f);
19            }
20            else if(k == "*"){
21                int f = stk.top();
22                stk.pop();
23                int s = stk.top();
24                stk.pop();
25                stk.push(s * f);
26            }
27            else if(k == "/"){
28                int f = stk.top();
29                stk.pop();
30                int s = stk.top();
31                stk.pop();
32                stk.push(s / f);
33            }
34            else{
35                stk.push(stoi(k));
36            }
37        }
38        return stk.top();
39    }
40};