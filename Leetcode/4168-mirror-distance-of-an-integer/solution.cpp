class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n);
        reverse(str.begin(),str.end());
        int x = stoi(str);
        return abs(n - x);
    }
};
