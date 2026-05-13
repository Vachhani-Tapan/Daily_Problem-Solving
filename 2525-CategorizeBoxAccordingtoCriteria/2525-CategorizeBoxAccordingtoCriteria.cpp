// Last updated: 5/13/2026, 4:40:38 PM
1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4        bool bulky = false;
5        bool heavy = false;
6        long long int vol = (long long)length * width * height;
7        if(width >= 10000 || length >= 10000 || height >= 10000 || vol >= 1000000000){
8            bulky = true;
9        }
10        if(mass >= 100) heavy = true;
11        if(bulky && heavy) return "Both";
12        if(bulky) return "Bulky";
13        if(heavy) return "Heavy";
14        return "Neither";
15    }
16};