class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0, d = 0, l = 0, r = 0;
        for(char c: moves){
            if(c == 'U'){ u++;}
            if(c == 'D'){ d++;}
            if(c == 'L'){ l++;}
            if(c == 'R'){ r++;}
        }
        return ((u == d) && (l == r));
    }
};
