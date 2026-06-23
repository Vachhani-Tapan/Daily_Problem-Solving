// Last updated: 6/23/2026, 10:25:28 AM
class Solution {
public:
    int pivotInteger(int n) {
        int total = (n * (n + 1)) / 2;
        for(int i = 1 ; i <= n ; i++){
            int l = (i * (i + 1)) / 2;
            int r = total - l + i;
            if(l == r){
                return i;
            }
        }
        return -1;
    }
};