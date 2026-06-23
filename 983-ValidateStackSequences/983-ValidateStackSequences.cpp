// Last updated: 6/23/2026, 10:28:19 AM
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int i = 0;
        for(auto k : pushed){
            stk.push(k);
            while(stk.size() > 0 && stk.top() == popped[i]){
                stk.pop();
                i++;
            }
        }
        return stk.empty();
    }
};