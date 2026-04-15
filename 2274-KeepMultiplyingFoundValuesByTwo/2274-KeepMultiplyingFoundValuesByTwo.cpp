// Last updated: 4/15/2026, 10:46:50 AM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s1(nums.begin() , nums.end());
        if(!s1.count(original)){
            return original;
        }
        int prod = original;
        while(s1.count(prod)){
            prod *= 2;
        }
        return prod;
    }
};