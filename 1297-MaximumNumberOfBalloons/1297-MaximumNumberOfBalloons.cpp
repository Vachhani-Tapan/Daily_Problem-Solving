// Last updated: 6/23/2026, 10:28:04 AM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0;
        int a = 0;
        int l = 0;
        int o = 0;
        int n = 0;
        for (auto k : text) {
            if (k == 'b')
                b++;
            else if (k == 'a')
                a++;
            else if (k == 'l')
                l++;
            else if (k == 'o')
                o++;
            else if (k == 'n')
                n++;
        }
        l = l / 2;
        o = o / 2;
        return min({b, a, l, o, n});
    }
};