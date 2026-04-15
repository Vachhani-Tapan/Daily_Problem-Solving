// Last updated: 4/15/2026, 10:49:39 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(auto k : nums){
            xor1 ^= k;
        }
        return xor1;
    }
};