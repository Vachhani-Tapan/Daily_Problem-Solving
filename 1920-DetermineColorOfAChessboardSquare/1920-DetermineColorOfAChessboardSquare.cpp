// Last updated: 4/15/2026, 10:47:33 AM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates[0] == 'a' || coordinates[0] == 'c' ||coordinates[0] == 'e' ||coordinates[0] == 'g'){
            if((coordinates[1] + 0) % 2 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        if(coordinates[0] == 'b' || coordinates[0] == 'd' ||coordinates[0] == 'f' ||coordinates[0] == 'h'){
            if((coordinates[1] + 0) % 2 == 0){
                return false;
            }
            else{
                return true;
            }
        }
        return 0;
    }
};