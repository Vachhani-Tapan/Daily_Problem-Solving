// Last updated: 6/23/2026, 10:27:44 AM
class Solution {
public:
    string generateTheString(int n) {
        if (n % 2 == 0) {
            return string(n - 1, 'a') + 'b';
        } else {
            return string(n, 'a');
        }
    }
};