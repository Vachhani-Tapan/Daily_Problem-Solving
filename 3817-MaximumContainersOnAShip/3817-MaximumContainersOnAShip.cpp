// Last updated: 6/23/2026, 10:24:05 AM
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int i = (n * n) * w;
        if (i > maxWeight) {
            return maxWeight / w;
        }
        return n * n;
    }
};