// Last updated: 4/15/2026, 10:47:58 AM
class Solution {
public:
    int xorOperation(int n, int start) {
        int xor1 = 0;
        for(int i = 0 ; i < n ; i++){
            xor1 ^= start + 2 * i;
        }
        return xor1;
    }
};