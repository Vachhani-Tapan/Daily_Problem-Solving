// Last updated: 4/15/2026, 10:47:28 AM
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negcount = 0;
        for(auto k : nums){
            if(k == 0) return 0;
            if(k < 0) negcount++;
        }
        if(negcount % 2 == 0) return 1;
        return -1;
    }
};