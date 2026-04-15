// Last updated: 4/15/2026, 10:48:01 AM
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> fact;
        for(int i = 1 ; i <= n ; i++){
            if(n % i == 0){
                fact.push_back(i);
            }
        }
        if(fact.size() < k) return -1;
        return fact[k - 1];
    }
};