// Last updated: 4/15/2026, 10:43:53 AM
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        for(auto k : nums){
            sum += k;
        }
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            sum = sum - nums[i];
            int avg = (sum / (nums.size() - i - 1));
            if(avg < nums[i]) res++;
        }
        return res;
    }
};