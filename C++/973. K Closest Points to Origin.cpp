class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, int>> vec;
        vector<vector<int>> sol;
        int n=points.size();
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            vec.push_back({(x*x+y*y),i});
        }
        sort(vec.begin(), vec.end());
        for(int i=0;i<k;i++){
            sol.push_back(points[vec[i].second]);
        }
        return sol;
    }
};
