// Last updated: 4/15/2026, 10:48:49 AM
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                y++;
            } else if (moves[i] == 'D') {
                y--;
            } else if (moves[i] == 'R') {
                x++;
            } else {
                x--;
            }
        }
        return (x == 0 && y == 0);
    }
};