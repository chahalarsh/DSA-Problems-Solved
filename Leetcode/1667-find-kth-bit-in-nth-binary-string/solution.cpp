class Solution {
public:
    char findKthBit(int n, int k) {
        string str = strBuild(n);
        return str[k - 1];
    }
    string strBuild(int num){
        if(num == 1){
            return "0";
        }
        return strBuild(num - 1) + "1" + reverseStr(invertStr(strBuild(num - 1)));
    }
    string invertStr(string str){
        for(int i = 0; i < str.size(); i++){
            if( str[i] == '1'){
                str[i] = '0';
            }else{
                str[i] = '1';
            }
        }
        return str;
    }
    string reverseStr(string str){
        reverse(str.begin(), str.end());
        return str;
    }
};
