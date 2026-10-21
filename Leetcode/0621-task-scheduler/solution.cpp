class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        int maxi = 0;
        for(char c : tasks){
            freq[c-'A']++;
            maxi = max(maxi, freq[c-'A']);
        }

        int ans = (1 + n) * (maxi - 1);

        for(int i : freq){
            if(i == maxi) ans++;
        }

        return max(ans, (int)tasks.size());
    }
};

