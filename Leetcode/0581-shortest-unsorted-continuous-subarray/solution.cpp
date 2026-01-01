class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        vector<int> cpy = nums;
        sort(cpy.begin(),cpy.end());
        if(cpy == nums){
            return 0;
        }
        int left = 0, right = nums.size() - 1;
        int n = nums.size();
        int length = n;
        while(n-- && left < right){
            if(nums[left] == cpy[left]){
                left++;
            }
            if(nums[right] == cpy[right]){
                right--;
            }
            if( length >= (right - left)){
                length = right - left + 1;
            }
        }
        return length;
    }
};
