class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> tmp = arr;
        int n = arr.size();
        int i = 0;
        int j = 0;

        while(i < n){
            arr[i] = tmp[j];

            if(arr[i] == 0 && i+1 < n){
                i++;
                arr[i] = 0;
            }

            i++;
            j++;
        }
    }
};
