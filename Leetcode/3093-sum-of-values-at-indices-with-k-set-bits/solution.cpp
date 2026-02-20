class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            int Cnt = 0;
            int num = i;

            while(num != 0){
                if( (num & 1) == 1 ){
                    Cnt++;
                }
                num = num >> 1;
            }
            if( Cnt == k){
                sum += nums[i];
            }
        }
        return sum;
    }
};
