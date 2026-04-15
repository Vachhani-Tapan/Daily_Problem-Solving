// Last updated: 4/15/2026, 10:44:26 AM
class Solution {
public:

    bool checkPrime(int n){
        if(n <= 1) return false;
        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int ,int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        bool isAns = false;
        for(auto k : m1){
            if(checkPrime(k.second)){
                return true;
            }
        }
        return 0;
    }
};