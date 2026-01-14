class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        if(s.size() <= 2){
            return s;
        }
        res += s[0];
        res += s[1];
        for(int i = 2; i < s.size(); i++){
            if(s[i - 2] == s[i - 1] && s[i - 1] == s[i]){
                continue;
            }else{
                res += s[i];
            }
        }
        return res;
    }
};
