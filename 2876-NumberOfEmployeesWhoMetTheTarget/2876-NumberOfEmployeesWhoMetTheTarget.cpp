// Last updated: 4/15/2026, 10:45:30 AM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(auto k : hours){
            if(k >= target) count++;
        }
        return count;
    }
};