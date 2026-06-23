// Last updated: 6/23/2026, 10:28:07 AM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> s1(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        bool isType = true;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] != ' ') {
                if (s1.find(text[i]) != s1.end()) {
                    isType = false;
                }
            } else {
                if (isType) {
                    count++;
                }
                isType = true;
            }
        }
        if(isType) count++;
        return count;
    }
};