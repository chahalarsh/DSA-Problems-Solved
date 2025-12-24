
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        int y = n-1;
        int z = n & y;
        if(z == 0){
            return true;
        }
        return false;
    }
};
