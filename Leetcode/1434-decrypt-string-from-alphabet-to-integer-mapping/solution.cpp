class Solution {
public:
    string freqAlphabets(string s) {

        string res;

        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '#'){
                int t = s[i-1] - '0';
                int t2 = s[i-2] - '0';

                t -= 1;
                t2 *= 10;

                int tmp = t + t2;
                char c =  'a' + tmp;
                res += c;
                i -= 2;
            }else{
                int tmp2 = s[i] - '0' - 1;
                char c2 = 'a' + tmp2;
                res += c2;
            }
        }     
        reverse(res.begin(), res.end());
        return res;   
    }
};
