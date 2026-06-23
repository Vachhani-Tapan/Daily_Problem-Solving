// Last updated: 6/23/2026, 10:24:26 AM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        double minavg = INT_MAX;
        int j = nums.size() - 1;
        for(int i = 0 ; i < nums.size() / 2 ; i++){
            double avg = (nums[i] + nums[j]) / 2.0;
            minavg = min(minavg , avg);
            j--;
        }
        return minavg;
    }
};