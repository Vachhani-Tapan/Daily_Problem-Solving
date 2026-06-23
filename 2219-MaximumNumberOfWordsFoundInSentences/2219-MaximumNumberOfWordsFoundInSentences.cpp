// Last updated: 6/23/2026, 10:26:26 AM
class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int siz = 0;
        for (int i = 0; i < s.size(); i++) {
            int count = 1;
            for (int j = 0; j < s[i].size(); j++) {
                if (s[i][j] == ' ') {
                    count++;
                }
            }
            siz = max(siz, count);
        }
        return siz;
    }
};