// Last updated: 6/23/2026, 10:23:16 AM
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0 ; i < s.size() - 1 ; i++){
            if(abs(s[i] - s[i+1]) > 2){
                return false;
            }
        }
        return true;
    }
};