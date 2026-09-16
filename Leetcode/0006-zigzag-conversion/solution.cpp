class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1){
            return s;
        }


        vector<string> t(numRows, "");
        bool tDown = true; // traveling down

        int size = s.size();
        int i = 0;
        int j = 0;

        string res = "";

        while( i < size){

            t[j].push_back(s[i]); 

            if(tDown){
                j++;
            }else{
                j--;
            }

            if( j == 0 && !tDown){
                tDown = true;
            }
            if( j == numRows - 1 && tDown){
                tDown = false;
            }
            
            i++;
        }

        for(int l = 0; l < numRows; l++){
            res += t[l];
        }
        return res;
    }
};
