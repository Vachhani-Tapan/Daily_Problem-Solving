// Last updated: 4/15/2026, 10:45:05 AM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> s1;
        vector<int> v1;
        int actualSum = 0;
        int expectedSum = (n * n) * (n * n + 1) / 2;
        int a, b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                actualSum += grid[i][j];

                if (s1.find(grid[i][j]) != s1.end()) {
                    a = grid[i][j];
                    v1.push_back(a);
                }

                s1.insert(grid[i][j]);
            }
        }
        b = expectedSum - actualSum + a;
        v1.push_back(b);
        return v1;
    }
};