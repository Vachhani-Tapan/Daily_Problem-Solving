// Last updated: 4/15/2026, 10:46:23 AM
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i = 2 ; i <= n - 2 ; i++){
            int temp = n;
            string bin = "";
            while(temp > 0){
                bin += (temp % i) + '0';
                temp /= i;
            }
            string rev = bin;
            reverse(rev.begin() , rev.end());
            if(rev != bin){
                return false;
            }
        }
        return true;
    }
};