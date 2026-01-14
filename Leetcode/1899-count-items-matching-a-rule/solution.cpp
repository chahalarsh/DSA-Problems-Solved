class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0;

        int t = 0;

        if(ruleKey == "type") t = 0;
        if(ruleKey == "color") t = 1;
        if(ruleKey == "name") t = 2;

        for(int i = 0; i < items.size(); i++){
            if(items[i][t] == ruleValue) res++;
        }
        return res;
    }
};
