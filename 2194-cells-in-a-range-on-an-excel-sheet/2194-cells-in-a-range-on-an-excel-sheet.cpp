class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> res;
        for (char c = s[0]; c <= s[3]; c++) {
            for (char j = s[1]; j <= s[4]; j++) {
                res.push_back({c, j});
            }
        }
        return res;
    }
};