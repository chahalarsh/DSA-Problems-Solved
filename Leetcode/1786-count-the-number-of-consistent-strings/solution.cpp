class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;

        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if( !allowed.contains(words[i][j])){
                    break;
                }
                if( j == words[i].size() - 1){
                    res++;
                }

            }
        }

        return res;        
    }
};
