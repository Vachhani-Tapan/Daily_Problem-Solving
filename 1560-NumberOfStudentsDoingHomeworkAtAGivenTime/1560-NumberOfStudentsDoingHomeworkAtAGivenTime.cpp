// Last updated: 4/15/2026, 10:48:05 AM
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for(int i = 0 ; i < startTime.size() ; i++){
            if((startTime[i] <= queryTime) && (endTime[i] >= queryTime)){
                count++;
            }
        }
        return count;
    }
};