#include <algorithm>
#include <string>
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        string x_str_reverse = x_str;
        reverse(x_str_reverse.begin(),x_str_reverse.end());

        if(x_str == x_str_reverse){
            return true;
        }
        else return false;
    }
};
