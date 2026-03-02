class Solution {
public:
    int smallestNumber(int n) {
        // Number with all set bits are 2^x - 1.
        if(n == 1){
            return 1;
        }
        vector<int> nums = {1,2,4,8,16,32,64,128,256,512,1024};
        for(int i = 0; i < nums.size(); i++){
            if( n <= nums[i] - 1){
                return nums[i] - 1;
            };
        }
        return 0;
    }
};
