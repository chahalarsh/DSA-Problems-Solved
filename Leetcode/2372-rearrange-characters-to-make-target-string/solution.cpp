class Solution {
public:
    int rearrangeCharacters(string s, string target) {

        if (s.size() < target.size()) {
            return 0;
        }

        vector<int> sCnt(26);
        vector<int> targetCnt(26);

        for (char ch : target) {
            targetCnt[ch - 'a']++;
        }
        for (char ch : s) {
            sCnt[ch - 'a']++;
        }

        int res = INT_MAX;

        for (int i = 0; i < 26; i++) {
            if (targetCnt[i] > 0) {
                int t = sCnt[i] / targetCnt[i];
                res = min(res, t);
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};
