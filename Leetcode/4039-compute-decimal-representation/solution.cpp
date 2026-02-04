class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;

        long long i = 1;
        while(n != 0){
            int digit = n % 10;
            
            if( digit != 0){
                res.push_back( digit * i);
            }
            n /= 10;
            i *= 10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
