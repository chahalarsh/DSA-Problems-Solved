
class Solution {
public:
    int reverse(int x) {
        int rev_x = 0;
        int last_num = 0;

        while(x != 0){
            if(rev_x > INT_MAX / 10 || rev_x < INT_MIN /10){
                return 0;
            }

            last_num = x % 10;
            rev_x = rev_x * 10 + last_num;

            x /= 10;

        }

        return rev_x;
    }
};
