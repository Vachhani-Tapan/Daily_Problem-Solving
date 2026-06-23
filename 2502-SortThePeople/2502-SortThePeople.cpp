// Last updated: 6/23/2026, 10:25:41 AM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int , string> m1;
        for(int i = 0 ; i < names.size() ; i++){
            // Mary : 180 , John : 165 , Emma : 170
            m1[heights[i]] = names[i];
        }

        // heights = [165 , 170 , 180]
        sort(heights.begin() , heights.end());

        // heights = [180 , 170 , 165]
        reverse(heights.begin() , heights.end());

        for(int i = 0 ; i < names.size() ; i++){
            // names = ["Mary","John","Emma"]
            names[i] = m1[heights[i]];
        }
        return names;
    }
};