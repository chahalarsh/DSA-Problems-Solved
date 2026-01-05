class Solution {
public:
    int numDupDigitsAtMostN(int n) {
        vector<int> digits;
        int temp = n + 1;
        while(temp) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        reverse(digits.begin(), digits.end());
        
        int unique = 0;
        int len = digits.size();
        
        for(int i = 1; i < len; i++) {
            unique += 9 * permutation(9, i - 1);
        }
        
        unordered_set<int> used;
        for(int i = 0; i < len; i++) {
            for(int j = i == 0 ? 1 : 0; j < digits[i]; j++) {
                if(used.count(j)) continue;
                unique += permutation(9 - i, len - i - 1);
            }
            if(used.count(digits[i])) break;
            used.insert(digits[i]);
        }
        
        return n - unique;
    }
    
    int permutation(int m, int n) {
        return n == 0 ? 1 : permutation(m, n - 1) * (m - n + 1);
    }
};
