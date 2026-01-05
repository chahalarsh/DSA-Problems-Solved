class Solution {
public:
    string largestEven(string s) {
            bool even = true;
            while(even){
                even = false;
                if(s.empty()){
                    return "";
                }
                if(s[s.size() - 1] == '2'){
                    return s;
                }else{
                    s.pop_back();
                    even = true;
                }
            }
            return "";
    }
};
