// Last updated: 5/12/2026, 8:44:20 AM
1class Solution {
2public:
3    int maxContainers(int n, int w, int maxWeight) {
4        int i = (n * n) * w;
5        if (i > maxWeight) {
6            return maxWeight / w;
7        }
8        return n * n;
9    }
10};