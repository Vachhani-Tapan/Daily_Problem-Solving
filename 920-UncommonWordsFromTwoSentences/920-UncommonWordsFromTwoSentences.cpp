// Last updated: 6/23/2026, 10:28:25 AM
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m1;
        string word = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != ' ') {
                word += s1[i];
            } else {
                m1[word]++;
                word = "";
            }
        }
        if(word != ""){
            m1[word]++;
            word = "";
        }
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != ' ') {
                word += s2[i];
            } else {
                m1[word]++;
                word = "";
            }
        }
        if(word != ""){
            m1[word]++;
            word = "";
        }
        vector<string> v1;
        for (auto k : m1) {
            if (k.second == 1) {
                v1.push_back(k.first);
            }
        }
        return v1;
    }
};