// Last updated: 6/23/2026, 10:28:17 AM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int siz = nums.size() / 2;
        unordered_map<int,int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        for(auto k : m1){
            if(k.second == siz){
                return k.first;
            }
        }
        return 0;
    }
};