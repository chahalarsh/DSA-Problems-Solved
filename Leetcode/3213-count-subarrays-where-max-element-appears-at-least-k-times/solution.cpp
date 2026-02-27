class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxEle = *max_element(nums.begin(),nums.end());
        int n = nums.size();

        int countMax = 0;
        int left = 0;
        long long res = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == maxEle) {
                countMax++;
            }

            while (countMax >= k) {
                res += (n - right);   
                if (nums[left] == maxEle) {
                    countMax--;
                }
                left++;
            }
        }

        return res;
    }
};
