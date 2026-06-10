// Last updated: 6/10/2026, 7:49:29 PM
1class Solution {
2public:
3    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
4        stack<int> stk;
5        int i = 0;
6        for(auto k : pushed){
7            stk.push(k);
8            while(stk.size() > 0 && stk.top() == popped[i]){
9                stk.pop();
10                i++;
11            }
12        }
13        return stk.empty();
14    }
15};