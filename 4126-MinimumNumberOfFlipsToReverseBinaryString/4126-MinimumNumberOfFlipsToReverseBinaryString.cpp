// Last updated: 6/23/2026, 10:23:44 AM
class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        while (n) {
            s += (n % 2) + '0';
            n /= 2;
        }
        int i = 0;
        int j = s.size() - 1;
        int count = 0;
        while (i < j) {
            if (s[i] != s[j]) {
                count++;
            }
            i++;
            j--;
        }
        return count * 2;
    }
};