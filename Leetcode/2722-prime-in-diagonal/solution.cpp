class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int res = 0;
        int m = 0, n = 0;

        while(m < nums.size() && n < nums[0].size()){
            if(isPrime(nums[m][n])){
                res = max(res, nums[m][n]);
            }
            m++;
            n++;
        }
        m = 0;
        n = nums.size() - 1;

        while(m < nums.size() && n >= 0){
            if(isPrime(nums[m][n])){
                res = max(res, nums[m][n]);
            }

            m++;
            n--;
        }


        return res;
    }
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;

        if(n % 2 == 0 || n % 3 == 0){
            return false;
        }

        for(int i = 5; i * i <= n; i += 6){
            if(n % i == 0 || n % (i+2) == 0){
                return false;
            }
        }
        return true;
    }
};
