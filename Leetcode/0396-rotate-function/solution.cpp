class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long long f = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            f += (long long)i * nums[i];
            sum += nums[i];
        }

        long long res = f;
        for (int k = 1; k < n; k++) {
            f += sum - (long long)n * nums[n - k];
            res = max(res, f);
        }
        return (int)res;
    }
};
