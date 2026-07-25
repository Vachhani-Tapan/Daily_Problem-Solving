class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = 0;
        while (mainTank) {
            if (mainTank < 5)
                return ans + (mainTank * 10);
            mainTank -= 5;
            ans += 50;
            if (additionalTank > 0) {
                mainTank++;
                additionalTank--;
            }
        }
        return ans;
    }
};