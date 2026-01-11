class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        string rep = "";
        while (sequence.find(rep += word) != string::npos) {
            ++ans;
        }
        return ans;
    }
};
