class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool allZero = true;
        for (int num : nums) {
            xr ^= num;
            if (num != 0){
                allZero = false;
            }
        }
        if (allZero){
            return 0;
        } 

        if( xr == 0){
            return nums.size() - 1;
        }else{
            return nums.size();
        }
    }
};
