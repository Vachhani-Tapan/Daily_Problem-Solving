// Last updated: 4/15/2026, 10:44:47 AM
class Solution {
public:
    bool doesAliceWin(string s) {
        for(auto k : s){
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
                return true;
            }
        }
        return false;
    }
};