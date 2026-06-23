// Last updated: 6/23/2026, 10:27:32 AM
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word = "";
        int count = 1;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] != ' ') {
                word += sentence[i];
            } else {
                if (word.substr(0, searchWord.size()) == searchWord) {
                    return count;
                }
                count++;
                word = "";
            }
        }
        if (word.substr(0, searchWord.size()) == searchWord) {
            return count;
        }
        return -1;
    }
};