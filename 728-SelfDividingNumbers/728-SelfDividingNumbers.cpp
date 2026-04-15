// Last updated: 4/15/2026, 10:48:47 AM
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v1;
        for (int i = left; i <= right; i++) {
            int isdiv = true;
            int temp = i;
            while (temp > 0) {
                int dig = temp % 10;
                if (dig == 0 || i % dig != 0) {
                    isdiv = false;
                }
                temp = temp / 10;
            }
            if (isdiv) {
                v1.push_back(i);
            }
        }
        return v1;
    }
};