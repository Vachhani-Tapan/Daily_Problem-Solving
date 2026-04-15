// Last updated: 4/15/2026, 10:47:55 AM
class Solution {
public:
    int countOdds(int low, int high) {

        if((low % 2 == 0) && (high % 2 == 0)) return (high-low)/2;
        else return (high-low)/2 + 1;

        // int count = 0;
        // for(int i = low ; i <= high ; i++){
        //     if(i % 2 != 0) count++;
        // }
        // return count;
    }
};