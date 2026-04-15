// Last updated: 4/15/2026, 10:47:27 AM
class Solution {
public:
    string sortSentence(string s) {
        vector<string> v1;
        string result = "";
        string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                char c = word.back();
                word.pop_back();
                word = c + word;
                v1.push_back(word);
                word = "";
            }
        }
        char c = word.back();
        word.pop_back();
        word = c + word;
        v1.push_back(word);
        sort(v1.begin(), v1.end());
        for (int i = 0; i < v1.size(); i++) {
            v1[i] = v1[i].substr(1);
            result += ' ' + v1[i];
        }
        return result.substr(1);
    }
};