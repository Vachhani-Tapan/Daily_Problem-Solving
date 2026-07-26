class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = -1000;
        int max2 = -1000;
        int max3 = -1000;
        int min1 = 0;
        int min2 = 0;
        for(auto k : nums){
            if(k >= max1){
                max3 = max2;
                max2 = max1;
                max1 = k;
            }
            else if(k >= max2){
                max3 = max2;
                max2 = k;
            }
            else if(k >= max3){
                max3 = k;
            }
            
            if(k <= min1){
                min2 = min1;
                min1 = k;
            }
            else if(k <= min2){
                min2 = k;
            }
        }
        return max(max1 * max2 * max3 , max1 * min1 * min2);
    }
};