// Last updated: 4/15/2026, 10:49:03 AM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;
        for(auto k : s) res ^= k;
        for(auto k : t) res ^= k;
        return res;
    }
};