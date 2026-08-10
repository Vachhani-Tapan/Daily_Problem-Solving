class Solution {
public:
    int candy(vector<int>& rating) {
        vector<int> candies(rating.size() , 1);

        for(int i = 1 ; i < rating.size() ; i++){
            if(rating[i] > rating[i-1]){
                candies[i] = candies[i-1] + 1;
            }
        }

        for(int i = rating.size() - 2 ; i >= 0 ; i--){
            if(rating[i] > rating[i+1]){
                candies[i] = max(candies[i] , candies[i+1] + 1);
            }
        }

        int total = 0;
        for(auto k : candies){
            total += k;
        }
        return total;
    }
};