class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> finalS;
        vector<char> finalT;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                if(!finalS.empty()){
                   finalS.pop_back(); 
                }
            }else{
                finalS.push_back(s[i]);
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#'){
                if(!finalT.empty()){
                   finalT.pop_back(); 
                }
            }else{
                finalT.push_back(t[i]);
            }
        }
        return finalS == finalT;
    }
};
