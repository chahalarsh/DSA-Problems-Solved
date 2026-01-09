class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res;
        for(int i = 0; i < sentences.size(); i++){
            int tmp = 0;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' ' || j == sentences[i].size() - 1){
                    tmp++;
                }
            }
            
            if(tmp>res){
                res = tmp;
            }
        }
        return res;
    }
};
