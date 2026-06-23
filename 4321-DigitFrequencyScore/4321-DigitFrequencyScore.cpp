// Last updated: 6/23/2026, 10:23:09 AM
class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        while(n){
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};