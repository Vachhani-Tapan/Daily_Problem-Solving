// Last updated: 6/23/2026, 10:24:31 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> s1(word.begin(), word.end());
        int count = 0;
        for (int i = 'a'; i <= 'z'; i++) {
            if (s1.count(i) && s1.count(i - 'a' + 'A')) {
                count++;
            }
        }
        return count;
    }
};