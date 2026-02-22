class Solution {
public:
    string maximumXor(string s, string t) {

        auto selunaviro = make_pair(s,t);
        int one = 0, zero = 0;
        for(char c: t){
            if( c == '1'){
                one++;
            }else{
                zero++;
            }
        }
        string res;
        for(int i = 0; i < s.size(); i++){
            if( s[i] == '0' ){
                if(one > 0){
                    res += '1';
                    one--;
                }else{
                    res += '0';
                    zero--;
                }
            }else{
                if(zero > 0){
                    res += '1';
                    zero--;
                }else{
                    res += '0';
                    one--;
                }
            }
        }
        return res;
    }
};
