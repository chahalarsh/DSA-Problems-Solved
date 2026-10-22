class Solution {
public:
    long long minimumSteps(string s) {
        long long res = 0;
        long long oneCnt = 0;
        
        for(int i = 0; i < s.size(); i++){
            if( s[i] == '1'){
                oneCnt++;
            }else{
                res += oneCnt;
            }
        }
        return res;
    }
};
