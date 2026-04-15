// Last updated: 4/15/2026, 10:45:56 AM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        for(auto k : nums){
            if(k > 0){
                pos++;
            }
            else if(k < 0){
                neg++;
            }
        }
        return max(pos,neg);
    }
};