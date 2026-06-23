// Last updated: 6/23/2026, 10:24:59 AM
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words,
                                         char separator) {
        vector<string> res;
        string word = "";
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] != separator) {
                    word += words[i][j];
                } else {
                    if (word != "") {
                        res.push_back(word);
                        word = "";
                    }
                }
            }
            if (word != "") {
                res.push_back(word);
                word = "";
            }
        }
        return res;
    }
};