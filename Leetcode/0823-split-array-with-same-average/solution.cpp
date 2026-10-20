class Solution{
public:
    bool splitArraySameAverage(vector<int> &A){
        int N = A.size();
        int S = accumulate(A.begin() , A.end() , 0);

        int M = N / 2;

        using ll = long long;
        unordered_map<ll , int> F;

        for(int mask = 0 ; mask < (1 << M) ; mask++){
            ll S1 = 0 , C1 = 0;
            for(int i = 0 ; i < M ; i++){
                if(mask >> i & 1){
                    S1 += A[i];
                    C1 += 1;
                }
            }

            ll F1 = S1 * N -  S * C1;
            F[F1] = C1;
        }

        for(int mask = 0 ; mask < (1 << (N - M)) ; mask++){
            ll S2 = 0 , C2 = 0;
            for(int i = 0 ; i < N - M ; i++){
                if(mask >> i & 1){
                    S2 += A[M + i];
                    C2 += 1;
                }
            }

            ll F2 = S2 * N - S * C2;

            if(F.count(-F2)){
                int C1 = F[-F2];
                if(C1 + C2 > 0 && C1 + C2 < N) return true;
            }
        }

        return false;
    }
};
