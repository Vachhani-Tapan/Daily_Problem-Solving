class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        int turn = 1;

        while(n >= i){

            n -= i;
            i--;
            if(turn == 1){
                turn = -1;
            }
            else{
                turn = 1;
            }
        }

        if(turn == 1){
            return false;
        }return true;
    }
};