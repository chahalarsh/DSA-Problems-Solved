class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {

        if( isBlack(coordinate1) == isBlack(coordinate2) ){
            return true;
        }
        return false;
        
    }

    bool isBlack(string s){
        int x = 'a' - s[0] + 1;
        int y = (int) s[1];

        if( (x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)){
            return true;
        }else{
            return false;
        }
    }
};
