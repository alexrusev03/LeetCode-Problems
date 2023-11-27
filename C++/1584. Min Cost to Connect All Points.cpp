class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;
        int j = 0;
        int k = 1;
        vector<int> cost(n, 10000000);
        while(k < n){
            cost[j] = INT_MAX;
            int min_j = j;
            for(int i = 0; i < n; i++){
                if(cost[i] != INT_MAX){
                    cost[i] = min(cost[i], abs(points[j][0] - points[i][0]) + abs(points[j][1] - points[i][1]));
                    if(cost[i] < cost[min_j]){
                        min_j = i;
                    }
                }
            }
            ans += cost[min_j];
            j = min_j;
            k++;
        }
        return ans;
    }
};
