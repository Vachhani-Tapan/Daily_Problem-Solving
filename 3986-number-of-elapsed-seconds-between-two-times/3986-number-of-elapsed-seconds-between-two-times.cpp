class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hr1 = stoi(startTime.substr(0,2));
        int min1 = stoi(startTime.substr(3,5));
        int sec1 = stoi(startTime.substr(6,8));
        int hr2 = stoi(endTime.substr(0,2));
        int min2 = stoi(endTime.substr(3,5));
        int sec2 = stoi(endTime.substr(6,8));
        return (hr2 - hr1) * 3600 + (min2 - min1) * 60 + (sec2-sec1);
    }
};