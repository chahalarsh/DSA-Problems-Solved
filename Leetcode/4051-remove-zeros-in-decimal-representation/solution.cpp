class Solution {
public:
    long long removeZeros(long long n) {
        long long res = 0;

        long long t = 1;
        while( n != 0){

            long long tmp = n % 10;
            tmp *= t;

            if( tmp != 0){  
                res += tmp;
                t *= 10;
            }
            n /= 10;
        }
        return res;
    }
};
