// Last updated: 6/23/2026, 10:26:20 AM
class Solution {
public:
    bool checkString(string s) {
        for(int i = 0 ; i < s.size() - 1; i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                return false;;
            }
        }
        return true;
    }
};