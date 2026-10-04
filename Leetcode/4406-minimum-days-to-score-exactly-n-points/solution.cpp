class Solution {
public:
    int minDays(int n) {
        vector<int> res(n + 1, INT_MAX);
        res[0] = 0;

        for (int t = 1; t <= n; t++) {
            for (int i = 1; i * (i + 1) / 2 <= t; i++) {
                int rem = t - i * (i + 1) / 2;
                int days = res[rem] + i + (rem > 0 ? 1 : 0);
                res[t] = min(res[t], days);
            }
        }
        return res[n];
    }
};
