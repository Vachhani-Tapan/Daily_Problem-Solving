// Last updated: 6/23/2026, 10:25:23 AM
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky = false;
        bool heavy = false;
        long long int vol = (long long)length * width * height;
        if(width >= 10000 || length >= 10000 || height >= 10000 || vol >= 1000000000){
            bulky = true;
        }
        if(mass >= 100) heavy = true;
        if(bulky && heavy) return "Both";
        if(bulky) return "Bulky";
        if(heavy) return "Heavy";
        return "Neither";
    }
};