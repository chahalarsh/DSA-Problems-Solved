class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int cnt = 0;
        int neg = 0;


        for(int i = 0; i < n; i++){
            if( s[i] == '('){
                cnt++;
            }else{
                cnt--;
                if( cnt < 0){
                    cnt = 0;
                    neg++;
                }
            }
        }

        return abs(cnt + neg);
    }
};
