class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size()-1;
        int n = mat[0].size()-1;
        int dist = 1;
        queue<pair<int,int>> q;
        for (int y = 0; y <= m; y++) {
            for (int x = 0; x <= n; x++) {
                if (mat[y][x]) mat[y][x] = -1;
                else if (y && mat[y - 1][x] || x && mat[y][x - 1] || y != m && mat[y + 1][x] || x != n && mat[y][x + 1]) q.push({x, y});
            }
        }
        int queueLength=q.size();
        while (queueLength) {
            while (queueLength--) {
                auto [x, y] = q.front();
                q.pop();
                if (y && mat[y - 1][x] == -1) {
                    mat[y - 1][x] = dist;
                    q.push({x, y - 1});
                }
                if (x && mat[y][x - 1] == -1) {
                    mat[y][x - 1] = dist;
                    q.push({x - 1, y});
                }
                if (y != m && mat[y + 1][x] == -1) {
                    mat[y + 1][x] = dist;
                    q.push({x, y + 1});
                }
                if (x != n && mat[y][x + 1] == -1) {
                    mat[y][x + 1] = dist;
                    q.push({x + 1, y});
                }
            }
            dist++;
            queueLength = q.size();
        }
        return mat;
    }
};
