class Solution {
public:
    int minTimeToType(string word) {
        char currPointerPosition = 'a';
        int res = 0;

        for(char c: word){
            if( c == currPointerPosition){
                res += 1;
            }else{
                int t = min( abs( c - currPointerPosition ),26 - abs( c - currPointerPosition));
                currPointerPosition = c;
                res += t + 1;
            }
        }
        return res;
    }
};
