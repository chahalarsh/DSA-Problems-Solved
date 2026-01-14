class Solution {
public:
    int longestString(int x, int y, int z) {
        if(x == y) return (2 * min(x,y) + z) * 2;
        return (2 * min(x,y) + z + 1) * 2;
    }
};
