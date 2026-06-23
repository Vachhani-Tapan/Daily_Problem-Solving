// Last updated: 6/23/2026, 10:23:12 AM
class Solution {
public:
    int passwordStrength(string password) {
        int point = 0;
        vector<bool> seen(256 , false);
        for(auto chr : password){
            if(!seen[chr]){
                seen[chr] = true;

                if (chr >= 'a' && chr <= 'z') {
                    point += 1;
                } else if (chr >= 'A' && chr <= 'Z') {
                    point += 2;
                } else if (chr >= '0' && chr <= '9') {
                    point += 3;
                } else {
                    point += 5;
                }
            }
        }
        return point;
    }
};