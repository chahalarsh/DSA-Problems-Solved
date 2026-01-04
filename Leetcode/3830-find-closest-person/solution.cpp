class Solution {
public:
    int findClosest(int x, int y, int z) {
        int tmp1 = abs(z - x);
        int tmp2 = abs(y - z);

        if(tmp1 > tmp2) return 2;
        if(tmp2 > tmp1) return 1;
        return 0;
    }
};
