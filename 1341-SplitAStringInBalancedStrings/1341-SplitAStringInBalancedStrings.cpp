// Last updated: 6/23/2026, 10:28:00 AM
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int answer = 0;
        for(auto k : s){
            if(k == 'L'){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                answer++;
            }
        }
        return answer;
    }
};