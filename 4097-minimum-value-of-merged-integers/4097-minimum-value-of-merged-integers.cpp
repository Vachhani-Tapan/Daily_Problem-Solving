class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size() - 1; i += 2) {
            string c = to_string(nums[i]);
            c += to_string(nums[i + 1]);
            int curr = stoi(c);
            ans = min(curr, ans);
        }
        return ans;
    }
};