// Last updated: 6/23/2026, 10:24:32 AM
class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3) return false;

        bool vowel = false;
        bool consonant = false;

        for(char k : word) {
            if(isdigit(k)) {
                continue;
            }
            else if(isalpha(k)) {
                char c = tolower(k);

                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    vowel = true;
                else
                    consonant = true;
            }
            else {
                return false;
            }
        }

        return vowel && consonant;
    }
};