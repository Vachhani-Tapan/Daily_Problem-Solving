// Last updated: 4/15/2026, 10:45:39 AM
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin() , prices.end());
        if(prices[0] + prices[1] > money) return money;
        return money - (prices[0] + prices[1]);
    }
};