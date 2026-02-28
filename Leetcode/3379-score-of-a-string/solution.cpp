class Solution {
public:
    int scoreOfString(string s) {
        long long sum = 0;
        int n = s.size();
        for(int i = 1; i < n; i++){
            sum += abs(s[i-1] - s[i]);
        }

        return sum;
    }
};
