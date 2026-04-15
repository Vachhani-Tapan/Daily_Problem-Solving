// Last updated: 4/15/2026, 10:46:26 AM
class Solution {
public:
    char repeatedCharacter(string s) {
        map <char , int> m1;
        for(int i = 0 ; i < s.size() ; i++){
            m1[s[i]]++;
            if(m1[s[i]] > 1) return s[i];
        }
        return 0;
    }
};