// Last updated: 4/15/2026, 10:47:41 AM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        int sum = 0;
        for(auto k : m1){
            if(k.second == 1) sum += k.first;
        }
        return sum;
    }
};