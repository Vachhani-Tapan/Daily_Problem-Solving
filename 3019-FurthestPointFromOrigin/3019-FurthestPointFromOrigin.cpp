// Last updated: 6/23/2026, 10:24:52 AM
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;
        for(auto k : moves){
            if(k == 'L') left++;
            else if(k == 'R') right++;
            else blank++;
        }
        return abs(right - left) + blank;
    }
};