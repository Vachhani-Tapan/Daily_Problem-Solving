// Last updated: 6/23/2026, 10:23:14 AM
class Solution {
public:
    bool consecutiveSetBits(int n) {
        if (n == 0 || n == 1)
            return false;
        string s = "";
        while (n) {
            s += n % 2 + '0';
            n /= 2;
        }
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1' && s[i + 1] == '1') {
                count++;
            }
        }
        return count == 1;
    }
};