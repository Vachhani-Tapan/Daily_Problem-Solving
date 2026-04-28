// Last updated: 4/28/2026, 6:02:55 PM
1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int currAlt = 0;
5        int maxAlt = 0;
6        for(int i = 0 ; i < gain.size() ; i++){
7            currAlt += gain[i];
8            maxAlt = max(maxAlt , currAlt);
9        }
10        return maxAlt;
11    }
12};