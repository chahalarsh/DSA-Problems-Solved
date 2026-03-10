class Solution {
public:
    int fib(int n) {
        if( n == 0 ) return 0;
        if( n == 1 ) return 1;

        long long t1 = 0;
        long long t2 = 1;
        long long c;

        for(int i = 2; i <= n ; i++){
            c = t1 + t2;
            t1 = t2;
            t2 = c;
        }
        return t2;
        
    }
};
