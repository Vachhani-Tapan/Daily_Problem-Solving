class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        for(auto c : s){
            if(!stk.empty() &&
               ((islower(stk.top()) && toupper(stk.top()) == c) ||
                (isupper(stk.top()) && tolower(stk.top()) == c))) {
                stk.pop();
            }
            else{
                stk.push(c);
            }
        }
        string res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin() , res.end());
        return res;
    }
};