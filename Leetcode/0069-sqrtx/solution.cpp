class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        
        for(i = 0; i <= x/2 + 1; i++ ){
            if( x < INT_MAX - 1){
                if((i*i) == x ){
                        return i;
                }
                if((i*i) > x){
                    i -= 1;
                    break;
                }
            }
            else{
                return 46340;
            }
        }

        return i;

    }
};
