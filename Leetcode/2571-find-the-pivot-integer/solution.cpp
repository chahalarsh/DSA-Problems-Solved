class Solution {
public:
    int pivotInteger(int n) {
        int lSum = 0, rSum = 0;
        int sum = (n*(n+1))/2;
        for(int i = 1; i <= n ; i++){
            lSum += i;
            rSum = (sum - lSum) + i;
            if(lSum == rSum){
                return i;
            }
        }
        return -1;
    }
};
