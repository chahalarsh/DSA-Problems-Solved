class Solution {
public:
    int minOperations(string s) {
        int res1 = 0;
        int res2 = 0;

        char str1 = '1';
        char str2 = '0';

        bool tmp = true;

        for(int i = 0; i < s.size(); i++){
            
            if( s[i] == str1){
                res1++;
            }
            if( s[i] == str2){
                res2++;
            }
            if(tmp){
                str1 = '0';
                str2 = '1';
            }else{
                str1 = '1';
                str2 = '0';
            }
            tmp = !tmp;
        }
        return min( res1, res2);
    }
};
