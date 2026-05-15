// Last updated: 5/15/2026, 9:15:33 AM
1class Solution {
2public:
3    double minimumAverage(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        double minavg = INT_MAX;
6        int j = nums.size() - 1;
7        for(int i = 0 ; i < nums.size() / 2 ; i++){
8            double avg = (nums[i] + nums[j]) / 2.0;
9            minavg = min(minavg , avg);
10            j--;
11        }
12        return minavg;
13    }
14};