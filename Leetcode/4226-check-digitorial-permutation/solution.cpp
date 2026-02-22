class Solution {
public:
    long long fact(long long n){
        if( n == 0){return 1;}
        return (n * fact(n - 1));
    }
    bool isDigitorialPermutation(int n) {
        int orgNum = n;
        long long res = 0;

        while( n != 0){
            int digit = n % 10;
            res += fact(digit);
            n /= 10;
        }

        n = orgNum;

        int freq1[10] = {0};

        while(n > 0){
            int t = n % 10;
            n /= 10;
            freq1[t]++;
        }
        int freq2[10] = {0};
        n = orgNum;
        while(res > 0){
            int t = res % 10;
            res /= 10;
            freq2[t]++;
        }
        for(int i = 0; i < 10; i++){
            if( freq2[i] != freq1[i]){
                return false;
            }
        }
        return true;
    
    }
};
