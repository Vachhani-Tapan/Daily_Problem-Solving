// Last updated: 6/23/2026, 10:27:12 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAlt = 0;
        int maxAlt = 0;
        for(int i = 0 ; i < gain.size() ; i++){
            currAlt += gain[i];
            maxAlt = max(maxAlt , currAlt);
        }
        return maxAlt;
    }
};