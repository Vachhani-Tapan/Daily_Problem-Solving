// Last updated: 6/23/2026, 10:28:43 AM
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1)
            return true;

        int count = 0;
        for (auto k : word) {
            if (isupper(k)) {
                count++;
            }
        }
        if (count == 1 && isupper(word[0]))
            return true;
        if (count == 0 || count == word.size())
            return true;
        else
            return false;
    }
};