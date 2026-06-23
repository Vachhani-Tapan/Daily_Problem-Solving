// Last updated: 6/23/2026, 10:23:39 AM
class Solution {
public:
    int vowelConsonantScore(string s) {
        int vow = 0;
        int con = 0;
        for (auto ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
                    ch == 'u') {
                        vow++;
                }
                else{
                    con++;
                }
            }
        }
        if(con == 0) return 0;
        return vow / con;
    }
};