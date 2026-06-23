// Last updated: 6/23/2026, 10:26:29 AM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int dist = INT_MIN;
        for (int i = 0; i < colors.size(); i++) {
            for (int j = i + 1; j < colors.size(); j++) {
                if (colors[i] != colors[j]) {
                    dist = max(dist, abs(j - i));
                }
            }
        }
        return dist;
    }
};