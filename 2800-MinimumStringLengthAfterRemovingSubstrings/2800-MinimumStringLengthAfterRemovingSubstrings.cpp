// Last updated: 6/23/2026, 10:25:08 AM
class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for(auto k : s){
            if(stk.empty()){
                stk.push(k);
                continue;
            }
            if(stk.top() == 'A' && k == 'B'){
                stk.pop();
            }
            else if(stk.top() == 'C' && k == 'D'){
                stk.pop();
            }
            else{
                stk.push(k);
            }
        }
        return stk.size();
    }
};