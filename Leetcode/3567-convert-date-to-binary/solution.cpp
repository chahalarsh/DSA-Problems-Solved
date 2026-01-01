class Solution {
public:
    string convertDateToBinary(string date) {

       return ( convertIntToBin(date.substr(0,4)) + "-" + 
                convertIntToBin(date.substr(5,2)) + "-" + 
                convertIntToBin(date.substr(8, 2)));
    }

    string convertIntToBin(string str){
        int num = stoi(str);
        string res = "";

        if(num == 0){
            return "0";
        }

        while(num > 0){
            if(num % 2 == 0){
                int tmp = num % 2;
                res += '0';
            }else{
                res += '1';
            }
            num /= 2;
        }
        reverse(res.begin(),res.end());
        return res;

    }
};
