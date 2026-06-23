// Last updated: 6/23/2026, 10:28:13 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int isopen = 0;
        string res = "";
        for(auto k : s){
            if(k == '('){
                if(isopen > 0) res += k;
                isopen++;
            }
            else{
                isopen--;
                if(isopen > 0) res += k;
            }
        }
        return res;
    }
};