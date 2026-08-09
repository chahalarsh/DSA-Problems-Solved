class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int tmp = 0;
        string res = "";
        spaces.push_back(s.size());

        for(int i = 0; i < spaces.size(); i++){
            res += s.substr( tmp, spaces[i] - tmp ) + " ";
            tmp = spaces[i];
        }  
        res.pop_back();
        return res;   

    }
};
