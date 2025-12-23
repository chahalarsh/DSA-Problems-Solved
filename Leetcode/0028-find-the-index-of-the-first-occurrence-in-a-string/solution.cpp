class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = haystack.find(needle);
        if(res != -1){
            return res;
        }
        else return -1;
    }
};
