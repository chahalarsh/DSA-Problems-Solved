class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if( s.size() < k){
            return false;
        }

        unordered_set<string> seen;

        int maxSubStrings = 1 << k;

        int left = 0;

        while( left + k <= s.size()){
            seen.insert(s.substr(left, k));
            left++;
        }
        return seen.size() == maxSubStrings;

    }
};
