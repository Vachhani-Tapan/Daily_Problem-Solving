// Last updated: 6/12/2026, 5:41:08 PM
1class Solution {
2public:
3    int minLength(string s) {
4        stack<char> stk;
5        for(auto k : s){
6            if(stk.empty()){
7                stk.push(k);
8                continue;
9            }
10            if(stk.top() == 'A' && k == 'B'){
11                stk.pop();
12            }
13            else if(stk.top() == 'C' && k == 'D'){
14                stk.pop();
15            }
16            else{
17                stk.push(k);
18            }
19        }
20        return stk.size();
21    }
22};