class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;

        // trim the starting space from the string
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        // if i == s.size() then we already  reached the end of the string so
        // return 0
        if (i == s.size()) {
            return 0;
        }

        // now when the string reach digits or char then check if there is any sign of - or +
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        long res = 0;
        while (i < s.size() && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');

            if (res * sign > INT_MAX)
                return INT_MAX;
            if (res * sign < INT_MIN)
                return INT_MIN;

            i++;
        }
        return (int)sign * res;
    }
};