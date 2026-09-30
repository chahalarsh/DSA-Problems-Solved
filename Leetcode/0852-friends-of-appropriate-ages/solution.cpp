class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        vector<int> cnt(121, 0), prefix(121, 0);
        for (int a : ages) cnt[a]++;
        for (int i = 1; i <= 120; i++) prefix[i] = prefix[i - 1] + cnt[i];

        int res = 0;
        for (int a = 15; a <= 120; a++) {
            if (cnt[a] == 0) continue;
            int lo = a / 2 + 7;
            int candidates = prefix[a] - prefix[lo];
            res += cnt[a] * (candidates - 1);
        }
        return res;
    }
};
