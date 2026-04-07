class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string t1 = "", t2 = "";
        for(string str: word1){
            t1 += str;
        }
        for(string str: word2){
            t2 += str;
        }
        return t1 == t2;
    }
};
