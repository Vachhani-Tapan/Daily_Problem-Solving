class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        vector<int> ans1;
        vector<int> ans2;
        unordered_map<int, int> freq;

        for (int i = 0; i < matches.size(); i++) {

            int winner = matches[i][0];
            int loser = matches[i][1];

            if (freq.find(winner) == freq.end()) {
                freq[winner] = 0;
            }

            freq[loser]++;
        }

        for (auto k : freq) {

            if (k.second == 0) {
                ans1.push_back(k.first);
            } 
            else if (k.second == 1) {
                ans2.push_back(k.first);
            }

        }
        
        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());
        return {ans1, ans2};
    }
};