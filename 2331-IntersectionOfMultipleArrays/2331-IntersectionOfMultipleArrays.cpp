// Last updated: 6/23/2026, 10:25:59 AM
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> freq(1001 , 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                freq[nums[i][j]]++;
            }
        }
        vector<int> res;
        int n = nums.size();
        for (int i = 1 ; i <= 1000 ; i++) {
            if (freq[i] == n) {
                res.push_back(i);
            }
        }
        return res;
    }
};