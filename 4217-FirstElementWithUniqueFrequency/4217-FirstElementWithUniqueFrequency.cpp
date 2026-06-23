// Last updated: 6/23/2026, 10:23:34 AM
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> m,m1;
        for(auto k : nums){
            m[k]++;
        }
        for(auto k : m){
            m1[k.second]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(m1[m[nums[i]]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};