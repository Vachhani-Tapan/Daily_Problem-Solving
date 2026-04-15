// Last updated: 4/15/2026, 10:43:43 AM
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(auto k : nums){
            if(k % 2 == 0){
                m1[k]++;
            }
        }   
        for(auto k : nums){
            if(m1[k] == 1){
                return k;
            }
        }
        return -1;
    }
};