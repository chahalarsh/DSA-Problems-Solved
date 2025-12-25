class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        long long left = 1, right = num/2;

        while(left <= right){
            long long mid = left + (right - left) /2;
            long long sq = mid * mid;

            if(num == sq){
                return true;
            }else if(num > sq){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return false;
    }
};
