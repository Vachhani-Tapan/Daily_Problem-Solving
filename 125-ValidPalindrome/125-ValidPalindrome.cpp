// Last updated: 4/15/2026, 10:49:41 AM
class Solution {
public:
    bool isPalindrome(string s) {
        string org = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9') {
                org += s[i];
            }
        }
        int i = 0;
        int j = org.size() - 1;
        cout << org;
        while (i <= j) {
            if (org[i] != org[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};