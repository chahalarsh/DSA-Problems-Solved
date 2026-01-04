class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        vector<int> tmp = {0};

        if(bits == tmp ){
            return true;
        }

        int n = bits.size();

        for(int i = 0; i < n - 1; i++){
            if(bits[i] == 0){
                continue;
            }
            if(i == n - 2 && bits[i] == 1){
                return false;
            }
            if(bits[i] == 1){
                i++;
            }
            if(i + 1 == n - 1){
                return true;
            }

        }

        return true;
    }
};
