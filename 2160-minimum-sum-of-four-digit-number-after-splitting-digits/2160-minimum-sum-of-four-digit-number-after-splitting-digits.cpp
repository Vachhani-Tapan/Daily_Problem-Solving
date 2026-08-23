class Solution {
public:

    int minimumSum(int num) {
        vector<int> dig(4,0);
        dig[0] = num % 10;
        dig[1] = (num / 10) % 10;
        dig[2] = (num / 100) % 10;
        dig[3] = (num / 1000);

        sort(dig.begin() , dig.end());

        return (dig[0] + dig[1]) * 10 + dig[2] + dig[3];
    }
};