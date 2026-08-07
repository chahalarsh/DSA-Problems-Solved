class Solution {
public:
    int reverseDegree(string s) {

        int res = 0;

        for(int i = 0; i < s.size(); i++){

            int t = ( 'z' - s[i]) + 1;
            res += t * (i + 1);

        }
        
        return res;
    }
};
