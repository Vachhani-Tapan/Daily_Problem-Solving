// Last updated: 6/23/2026, 10:25:55 AM
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == letter){
                count++;
            }
        }
        return count * 100 / s.size();
    }
};