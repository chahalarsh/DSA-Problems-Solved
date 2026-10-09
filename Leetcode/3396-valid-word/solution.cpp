class Solution {
public:
    bool isValid(string word) { // It was so easy I just couldn't skip it.
        int n = word.size();

        if (n < 3) {
            return false;
        }

        bool foundVowel = false;
        bool foundConsonant = false;

        for (char c : word) {
            if (!isalnum(c)) {
                return false;
            }

            if (isdigit(c)) {
                continue;
            }

            char ch = tolower(c);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                foundVowel = true;
            } else {
                foundConsonant = true;
            }
        }

        return foundVowel && foundConsonant;
    }
};
