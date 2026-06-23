// Last updated: 6/23/2026, 10:26:50 AM
class Solution {
public:
    bool isSumEqual(string w1, string w2, string targetWord) {
        int s1 = 0;
        int s2 = 0;
        int st = 0;
        for (auto k : w1) {
            s1 = (s1 * 10) + (k - 'a');
        }
        for (auto k : w2) {
            s2 = (s2 * 10) + (k - 'a');
        }
        for (auto k : targetWord) {
            st = (st * 10) + (k - 'a');
        }
        return (s1 + s2) == st;
    }
};