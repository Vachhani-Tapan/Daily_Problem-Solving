// Last updated: 4/15/2026, 10:49:04 AM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m1;
        for (auto k : s) {
            m1[k]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(m1[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};