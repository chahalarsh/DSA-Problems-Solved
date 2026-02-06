class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int l = 0, r = 0;
        int max_window = 0;

        while (l < n) {
            while (r < n && (long long)nums[r] <= (long long)nums[l] * k) {
                r++;
            }
            max_window = max(max_window, r - l);
            l++;
        }

        return n - max_window;
    }
};

