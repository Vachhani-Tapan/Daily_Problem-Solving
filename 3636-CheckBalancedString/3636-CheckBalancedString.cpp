// Last updated: 4/15/2026, 10:44:37 AM
class Solution {
public:
    bool isBalanced(string num) {
        int even = 0;
        int odd = 0;
        for(int i = 0 ; i < num.size() ; i++){
            if(i % 2 == 0){
                even += int(num[i] - '0');
            }
            else{
                odd += int(num[i] - '0');
            }
        }
        cout << even << endl;
        cout << odd << endl;
        return (odd == even);
    }
};