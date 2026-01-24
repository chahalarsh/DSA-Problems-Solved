class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";

        int i = a.size() - 1;
        int j = b.size() - 1; 


        char crr = '0';  
        char s, v;

        while(i >= 0 || j >= 0){

            if(i < 0){
                s = '0';
                v = b[j];
            }
            if(j < 0){
                s = a[i];
                v = '0';
            }
            if(i >= 0 && j >= 0){
                s = a[i];
                v = b[j];
            }

            if( s == '0' && v == '0'){
                if(crr == '0'){
                    res = '0' + res;
                }else{
                    res = '1' + res;
                    crr = '0';
                }
            }else if( (s == '0' && v == '1') || (s == '1' && v == '0') ){
                if(crr == '0'){
                    res = '1' + res;
                }else{
                    res = '0' + res;
                    crr = '1';
                }
            }else if(s == '1' && v == '1'){
                if(crr == '0'){
                    res = '0' + res;
                    crr = '1';
                }else {
                    res = '1' + res;
                    crr = '1';
                }
            }

            i--;
            j--;
        }

        if(crr == '1'){
            res = '1' + res;
        }

        return res;
    }
};
