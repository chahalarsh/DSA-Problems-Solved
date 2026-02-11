class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int ops = 0;

        for(int i = 0; i < logs.size(); i++){
            if(logs[i] == "../"){
                if(ops != 0){
                    ops--;
                }
            }else if( logs[i] == "./"){
                continue;
            }else{
                ops++;
            }
        }

        return ops;
    }
};
