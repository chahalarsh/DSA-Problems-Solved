class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int n25 = n/4;

        int Cnt = 0;

        if(n == 1){
            return arr[0];
        }

        for(int i = 1; i < n; i++){
            if( arr[i-1] == arr[i]){
                Cnt++;
            }else{
                Cnt = 0;
            }

            if(Cnt >= n25){
                return arr[i];
            }

        }
        return -1;
    }
};
