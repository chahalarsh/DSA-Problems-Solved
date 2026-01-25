class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size() - 1;
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                continue;
            }else{
                return i + 1;
            }
        }
        return 0;
    }
};
