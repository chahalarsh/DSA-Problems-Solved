class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();

        if( k  == 0){
            return n;
        }

        int sameEleCnt = 0;
        int res = 0;

        for(int i = 0; i < n - 1; i++){
            if( nums[i] < nums[i + 1] ){
                if( n - i - 1 >= k){
                    res += sameEleCnt + 1;
                    
                }
                

                sameEleCnt = 0;
            }else if( nums[i] == nums[i + 1]){
                sameEleCnt++;
            }
        }

        return res;
    }
};
