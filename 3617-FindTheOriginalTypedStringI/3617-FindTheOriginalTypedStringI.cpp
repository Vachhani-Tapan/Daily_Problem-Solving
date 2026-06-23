// Last updated: 6/23/2026, 10:24:17 AM
class Solution {
public:
    int possibleStringCount(string word) {
        int count = word.size();
        for (int i = word.size() - 1; i > 0; i--) {
            if (word[i] != word[i - 1]) {
                count--;
            }
        }
        return count;
    }
};