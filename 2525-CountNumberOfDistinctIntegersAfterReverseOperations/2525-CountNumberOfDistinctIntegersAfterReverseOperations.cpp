// Last updated: 6/23/2026, 10:25:34 AM
class Solution {
public:
    int revDig(int n){
        int rev = 0;
        while(n){
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s1(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            s1.insert(revDig(nums[i]));
        }
        return s1.size();
    }
};