// Last updated: 6/23/2026, 10:27:30 AM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i = 0 ; i < prices.size() ; i++){
            for(int j = i + 1 ; j < prices.size() ; j++){
                if(prices[j] <= prices[i]){
                    prices[i] -= prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};