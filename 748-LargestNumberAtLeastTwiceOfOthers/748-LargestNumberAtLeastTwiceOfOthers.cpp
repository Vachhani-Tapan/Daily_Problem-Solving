// Last updated: 4/15/2026, 10:48:44 AM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = *max_element(nums.begin() , nums.end());
        int secLrg = INT_MIN;
        int idx = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == max1) idx = i;
            if((nums[i] < max1) && (nums[i] > secLrg)){
                secLrg = nums[i];
            }
        }
        return (max1 >= 2 * secLrg) ? idx : -1;
    }
};