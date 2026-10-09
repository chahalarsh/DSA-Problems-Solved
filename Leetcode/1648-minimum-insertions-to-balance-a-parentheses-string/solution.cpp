class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int res = 0;
        int openCnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                openCnt++;
            } else {
                if(s[i+1] == ')'){
                    i++;
                    if(openCnt > 0){
                        openCnt--;
                    }else{
                        res++;
                    }
                }else{
                    res++;
                    if(openCnt > 0){
                        openCnt--;
                    }else{
                        res++;
                    }
                }
            }
        }
        res += openCnt * 2;
        return res;
    }
};
