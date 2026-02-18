class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int t = (n & 1);

        while( n != 0){
            if( (n & 1) == t){
                t = !t;
                n = n>>1;
            }else{
                return false;
            }
        }
        return true;
    }
};
