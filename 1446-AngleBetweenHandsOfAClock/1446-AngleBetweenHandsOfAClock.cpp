// Last updated: 6/23/2026, 10:27:51 AM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minAngle = minutes * 6.0;
        double hourAngle = (hour % 12) * 30 + (minutes * 0.5);

        double diff = abs(minAngle - hourAngle);

        return min(diff , 360 - diff);
    }
};