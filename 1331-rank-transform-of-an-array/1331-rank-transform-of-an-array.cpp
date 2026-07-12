class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> freq;
        vector<int> res;
        int rank = 1;
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]] = 0;
        }
        for (auto& k : freq) {
            k.second = rank++;
        }
        for (auto k : arr) {
            res.push_back(freq[k]);
        }
        return res;
    }
};