// Last updated: 4/15/2026, 10:48:06 AM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max1 = *max_element(candies.begin() , candies.end());
        vector<bool> v1;
        for(int i = 0 ; i < candies.size() ; i++){
            if(candies[i] + extraCandies >= max1){
                v1.push_back(true);
            }
            else{
                v1.push_back(false);
            }
        }
        return v1;
    }
};