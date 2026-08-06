class Solution {
public:
    int smallestNumber(int n, int t) {

        int res = n;

        while (!areDigitsDivisible( res, t)){
            res++;
        }
        return res;

    }

    bool areDigitsDivisible(int a, int b){

        int temp = 1;

        while( a > 0){
            temp *= a % 10;
            a /= 10;
        }
        
        return ( temp % b ) == 0;
    }
};
