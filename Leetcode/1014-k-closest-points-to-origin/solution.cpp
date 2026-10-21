class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int size = points.size();
        vector<pair<int, int>> dist_ind(size);
        for(int i=0; i<size; i++) {
            auto &p = points[i];
            dist_ind[i] = {p[0]*p[0] + p[1]*p[1], i};
        }
        nth_element(dist_ind.begin(), dist_ind.begin()+k, dist_ind.end());
        vector<vector<int>> ans(k);
        for(int i=0; i<k; i++) {
            ans[i] = move(points[dist_ind[i].second]);
        }
        return ans;
    }
};
