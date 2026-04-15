// Last updated: 4/15/2026, 10:44:55 AM
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for(int i = 0 ; i < s.size() - 1 ; i++){
            score += abs(s[i] - s[i+1]);
        }
        return score;
    }
};