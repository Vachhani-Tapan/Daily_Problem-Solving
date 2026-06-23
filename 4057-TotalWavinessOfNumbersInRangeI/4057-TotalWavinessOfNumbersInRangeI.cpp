// Last updated: 6/23/2026, 10:23:51 AM
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        if (num2 < 100)
            return false;
        for (int i = num1; i <= num2; i++) {
            int n = i;
            string s = "";
            while (n) {
                int a = n % 10;
                char c = a + '0';
                s += c;
                n /= 10;
            }
            for (int i = 1; i < s.size() - 1; i++) {
                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                    count++;
                }
            }
        }
        return count;
    }
};