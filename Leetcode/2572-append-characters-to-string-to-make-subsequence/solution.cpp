class Solution {
public:
    int appendCharacters(string s, string t) {
        int tTravel = 0;

        for(int i = 0; i < s.size(); i++){
            if( s[i] == t[tTravel]){
                tTravel++;
            }
        }
        return t.size() - tTravel;
    }
};
