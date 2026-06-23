// Last updated: 6/23/2026, 10:23:59 AM
class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(auto k : s){
            if(isalpha(k)){
                res += k;
            }
            else if(k == '%'){
                reverse(res.begin() , res.end());
            }
            else if(k == '#'){
                res = res + res;
            }
            else if(res.size() > 0 && k == '*'){
                res.pop_back();
            }
        }
        return res;
    }
};