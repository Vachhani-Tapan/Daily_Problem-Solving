// Last updated: 6/23/2026, 10:26:32 AM
class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                int n = 0;
                while (i < s.size() && isdigit(s[i])) {
                    n = n * 10 + (s[i] - '0');
                    i++;
                }
                if (n <= prev) {
                    return false;
                }
                prev = n;
            }
        }
        return true;
    }
};