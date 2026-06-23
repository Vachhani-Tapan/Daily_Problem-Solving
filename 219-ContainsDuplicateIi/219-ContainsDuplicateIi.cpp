// Last updated: 6/23/2026, 10:29:16 AM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m1.find(nums[i]) != m1.end()){
                if(i - m1[nums[i]] <= k){
                    return true;
                }
            }
            m1[nums[i]] = i;
        }
        return false;
    }
};