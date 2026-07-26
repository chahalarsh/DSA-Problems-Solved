class Solution {
public:
    string largestEven(string s) {
        bool isEven = true;

        while(isEven){
            isEven = false;
            if(s.empty()){
                return "";
            }
            if(s[s.size() - 1] == '2'){
                return s;
            }else{
                isEven = true;
                s.pop_back();
            }
        }

        return "";
        
    }
};
