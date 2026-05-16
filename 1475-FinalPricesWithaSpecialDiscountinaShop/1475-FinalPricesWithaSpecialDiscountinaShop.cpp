// Last updated: 5/16/2026, 5:13:15 PM
1class Solution {
2public:
3    vector<int> finalPrices(vector<int>& prices) {
4        for(int i = 0 ; i < prices.size() ; i++){
5            for(int j = i + 1 ; j < prices.size() ; j++){
6                if(prices[j] <= prices[i]){
7                    prices[i] -= prices[j];
8                    break;
9                }
10            }
11        }
12        return prices;
13    }
14};