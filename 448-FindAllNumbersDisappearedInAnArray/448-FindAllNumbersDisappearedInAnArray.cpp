// Last updated: 6/23/2026, 10:28:50 AM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> s1(nums.begin() , nums.end());
        for(int i = 1 ; i <= nums.size() ; i++){
            if(s1.find(i) == s1.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};