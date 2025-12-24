class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        char c;
        int tmp;

        for(int j = 0; j < strs[0].size(); j ++){
            c = strs[0][j];

            for(int i = 0; i < strs.size(); i++){
                if(strs[i][j] == c){
                    tmp++;
                }
                if(strs[i][j] != c){
                    return s;
                }

                if(tmp == strs.size() ){
                    s = s + c;
                }
            }
            tmp = 0;
            
        }
        return s;
    }
};
