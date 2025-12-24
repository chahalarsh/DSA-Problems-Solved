class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0){
            return false;
        }

        vector<char> stack;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push_back(s[i]);
                continue;
            }
            if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(stack.size() > 0){
                    if(s[i] == ')'){
                        if(stack.back() == '('){
                            stack.pop_back();
                        }
                        else{
                            return false;
                        }
                    }
                    if(s[i] == '}'){
                        if(stack.back() == '{'){
                            stack.pop_back();
                        }
                        else{
                            return false;
                        }
                    }
                    if(s[i] == ']'){
                        if(stack.back() == '['){
                            stack.pop_back();
                        }
                        else{
                            return false;
                        }
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(stack.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
};
