// Last updated: 6/23/2026, 10:27:55 AM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for(int i = 1 ; i <= n / 2 ; i++){
            ans.push_back(i);
            ans.push_back(-i);
        }
        if(n % 2 != 0){
            ans.push_back(0);
        }
        return ans;
    }
};