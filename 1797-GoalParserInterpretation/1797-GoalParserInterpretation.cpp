// Last updated: 4/15/2026, 10:47:46 AM
class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0 ; i < command.size() ;){
            if(command[i] == 'G'){
                ans += 'G';
                i++;
            }
            if(command[i] == '(' && command[i+1] == ')'){
                ans += "o";
                i = i + 2;
            }
            if(command[i] == '(' && command[i + 1] == 'a'){
                ans += "al";
                i = i + 4;
            }
        }
        return ans;
    }
};