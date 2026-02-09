class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> res = {0,0};

        while(n != 0){
            if( n & 1 == 1){
                res[0]++;
            }
            
            n = n >> 1;

            if( n & 1 == 1){
                res[1]++;
            }

            n = n >> 1;
        }

        return res;
    }
};
