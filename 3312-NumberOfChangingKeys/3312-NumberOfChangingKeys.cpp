// Last updated: 6/23/2026, 10:24:39 AM
class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            char s1 = tolower(s[i]);
            char s2 = tolower(s[i + 1]);
            if (s1 != s2) {
                count++;
            }
        }
        return count;
    }
};