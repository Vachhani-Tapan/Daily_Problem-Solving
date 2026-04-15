// Last updated: 4/15/2026, 10:45:35 AM
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min1 = *min_element(nums.begin() , nums.end());
        int max1 = *max_element(nums.begin() , nums.end());
        int count = 0;
        for(auto k : nums){
            if(k > min1 && k < max1){
                return k;
            }
        }
        return -1;
    }
};