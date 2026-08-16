class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if(nums[i] > 0){
                break;
            }

            int t = nums[i] * -1;

            auto it = find(nums.begin(), nums.end(), t);
            if (it != nums.end()) {
                return abs(t);
            }
        }

        return -1;
    }
};
