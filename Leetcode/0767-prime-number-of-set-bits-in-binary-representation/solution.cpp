class Solution {
public:
    int countPrimeSetBits(int left, int right) {

        int res = 0; 
        for(int i = left; i <= right; i++){
            if( isPrime(__builtin_popcount(i))){
                res++;
            }
        }
        return res; 
    }
    bool isPrime(int n){
        if( n == 2  ||
            n == 3  ||
            n == 5  ||
            n == 7  ||
            n == 11 ||
            n == 13 ||
            n == 17 ||
            n == 19              
        ){
            return true;
        }else{
            return false;
        }
    }
};
