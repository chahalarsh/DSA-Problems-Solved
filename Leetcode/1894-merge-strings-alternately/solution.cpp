class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();
        string res = "";
        int tmp = 0;

        for(int i = 0; i < s1 + s2; i++){
            if(tmp < s1){
                res += word1[tmp];
            }
            if(tmp < s2){
                res += word2[tmp];
            }
            tmp++;
        }
        return res;
    }
};
