// Last updated: 4/15/2026, 10:43:35 AM
class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0) return "Green";
        else if(timer == 30) return "Orange";
        else if(timer >= 30 && timer <= 90) return "Red";
        return "Invalid";
    }
};