// Last updated: 5/10/2026, 8:57:43 PM
1class Solution {
2public:
3    vector<int> scoreValidator(vector<string>& events) {
4        int counter = 0;
5        int score = 0;
6        for(int i = 0 ; i < events.size() ; i++){
7            if(counter == 10) break;
8            if(events[i] >= "0" && events[i] <= "6"){
9                score += stoi(events[i]);
10            }
11            else if(events[i] == "W"){
12                counter++;
13            }
14            else{
15                score++;
16            }
17        }
18        return {score,counter};
19    }
20};