// Last updated: 6/23/2026, 10:25:46 AM
class Solution {
public:
    string removeStars(string s) {
        string res = "";
        for(auto k : s){
            if(k != '*'){
                res += k;
            }
            else{
                res.pop_back();
            }
        }
        return res;
    }
};