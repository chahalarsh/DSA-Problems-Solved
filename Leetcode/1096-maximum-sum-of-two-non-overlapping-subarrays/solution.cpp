class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        auto getSum = [&](int l, int r) {
            return prefix[r] - prefix[l];
        };

        int result = 0;

        int maxFirst = 0;
        for (int i = firstLen + secondLen; i <= n; i++) {
            maxFirst = max(maxFirst, getSum(i - secondLen - firstLen, i - secondLen));
            result = max(result, maxFirst + getSum(i - secondLen, i));
        }

        int maxSecond = 0;
        for (int i = firstLen + secondLen; i <= n; i++) {
            maxSecond = max(maxSecond, getSum(i - firstLen - secondLen, i - firstLen));
            result = max(result, maxSecond + getSum(i - firstLen, i));
        }

        return result;
    }
};

