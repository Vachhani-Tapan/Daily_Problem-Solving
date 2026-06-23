// Last updated: 6/23/2026, 10:23:24 AM
class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter = 0;
        int score = 0;
        for(int i = 0 ; i < events.size() ; i++){
            if(counter == 10) break;
            if(events[i] >= "0" && events[i] <= "6"){
                score += stoi(events[i]);
            }
            else if(events[i] == "W"){
                counter++;
            }
            else{
                score++;
            }
        }
        return {score,counter};
    }
};