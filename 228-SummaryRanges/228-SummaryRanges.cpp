// Last updated: 6/23/2026, 10:29:14 AM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        for (int i = 0; i < nums.size(); i++) {
            int start = nums[i];
            int end = start;
            while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
                end = nums[i+1];
                i++;
            }
            if (start == end) {
                res.push_back(to_string(start));
            } else {
                string range = to_string(start) + "->" + to_string(end);
                res.push_back(range);
            }
        }
        return res;
    }
};