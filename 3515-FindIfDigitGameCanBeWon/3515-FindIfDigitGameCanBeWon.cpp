// Last updated: 6/23/2026, 10:24:24 AM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singSum = 0;
        int dubSum = 0;
        for(auto k : nums){
            if(k >= 0 && k <= 9) singSum += k;
            else dubSum += k;
        }
        if(singSum > dubSum) return true;
        if(singSum < dubSum) return true;
        return false;
    }
};