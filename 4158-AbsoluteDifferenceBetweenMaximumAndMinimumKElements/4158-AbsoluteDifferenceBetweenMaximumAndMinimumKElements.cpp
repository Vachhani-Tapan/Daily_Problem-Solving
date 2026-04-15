// Last updated: 4/15/2026, 10:44:04 AM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int right = 0;
        int left = 0;
        while(k--){
            left += nums[i];
            right += nums[j];
            i++;
            j--;
        }
        return abs(right - left);
    }
};