// Last updated: 6/23/2026, 10:23:55 AM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int time = INT_MAX;
        for(int i = 0 ; i < tasks.size() ; i++){
            int sum = 0;
            for(int j = 0 ; j < tasks[i].size() ; j++){
                sum += tasks[i][j];
            }
            time = min(time , sum);
        }
        return time;
    }
};