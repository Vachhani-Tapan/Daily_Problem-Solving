// Last updated: 6/23/2026, 10:23:56 AM
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> m1;
        while (n) {
            int i = n % 10;
            m1[i]++;
            n /= 10;
        }
        int freq = INT_MAX;
        int dig = INT_MAX;
        for (auto k : m1) {
            if (k.second < freq) {
                freq = k.second;
                dig = k.first;
            }
            else if(k.second == freq){
                dig = min(dig, k.first);
            }
        }
        return dig;
    }
};