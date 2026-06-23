// Last updated: 6/23/2026, 10:25:20 AM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(auto k : nums){
            string s  = to_string(k);
            for(auto c : s){
                res.push_back(c - '0');
            }
        }
        return res;
    }
};