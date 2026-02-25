class Solution {
public:
    static bool compare(int a, int b){
        int a1 = __builtin_popcount(a);
        int b1 = __builtin_popcount(b);

        if( a1 == b1 ){
            return a < b;
        }else{
            return a1 < b1;
        }
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};
