// Last updated: 4/15/2026, 10:44:13 AM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int , int> m1;
        int sum = 0;
        for(auto i : nums){
            m1[i]++;
        }
        for(auto j : m1){
            if(j.second % k == 0){
                sum += j.first * j.second;
            }
        }
        return sum;
    }
};