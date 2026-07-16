class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long mx = nums[0];
        long long prefixGCD = 0;
        vector<long long> res;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > mx){
                mx = nums[i];
            }
            prefixGCD = gcd(nums[i] , mx);
            res.push_back(prefixGCD);
        }
        sort(res.begin() , res.end());
        long long sum = 0;
        int i = 0;
        int j = res.size() - 1;
        while(i < j){
            sum += gcd(res[i] , res[j]);
            j--;
            i++;
        }
        return sum;
    }
};