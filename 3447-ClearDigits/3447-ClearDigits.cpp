// Last updated: 4/15/2026, 10:44:48 AM
class Solution {
public:
    string clearDigits(string s) {
        for(int i = 1 ; i < s.size() ; i++){
            if(isdigit(s[i])){
                s.erase(i - 1 , 2);
                i -= 2;
            }
        }
        return s;
    }
};