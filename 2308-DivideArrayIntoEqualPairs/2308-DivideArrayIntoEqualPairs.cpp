// Last updated: 6/23/2026, 10:26:01 AM
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        for(auto k : m1){
            if(k.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};