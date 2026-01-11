class Solution {
public:
    bool detectCapitalUse(string word) {
        int tmp = 0;

        for(char c : word){
            if('Z' - c >= 0){
                tmp++;
            }
        }

        if(tmp == 0 || tmp == word.size()){
            return true;
        }
        if(tmp == 1 && 'Z' - word[0] >= 0){
            return true;
        }

        return false;
    }
};
