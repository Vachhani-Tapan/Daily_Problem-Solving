// Last updated: 4/15/2026, 10:49:48 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        while(s.size() > 0 && s.back() == ' '){
            s.pop_back();
        }
        for(int i = s.size() - 1; i >= 0 ; i--){
            if(s[i] != ' '){
                count++;
            }
            else{
                return count;
            }
        }
        return count;
    }
};