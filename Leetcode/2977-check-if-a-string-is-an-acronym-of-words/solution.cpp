class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string tmp = "";
        for(int  i = 0; i < words.size(); i++){
            tmp += words[i][0];
        }
        return tmp == s ? true : false;        
    }
};
