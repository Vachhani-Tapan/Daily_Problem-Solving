// Last updated: 4/15/2026, 10:44:03 AM
class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int rev = 0;
        while(temp){
            rev = (rev * 10) + temp % 10;
            temp = temp / 10;
        }
        return abs(n - rev);
    }
};