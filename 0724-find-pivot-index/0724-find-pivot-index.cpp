class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (auto k : nums) {
            sum += k;
        }
        int ls = 0;
        int rs = sum - nums[0];
        if (ls == rs) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            ls += nums[i - 1];
            rs = sum - nums[i] - ls;
            if (ls == rs) {
                return i;
            }
        }
        return -1;
    }
};