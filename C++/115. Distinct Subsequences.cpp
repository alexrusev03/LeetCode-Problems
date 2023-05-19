class Solution {
public:
    int numDistinct(string s, string t) {
        int m=1e9+7;
        int n1 = s.size();
        int n2 = t.size();
        vector<vector<int>> vec(n2+1,vector<int>(n1+1));
        for(int j=0; j<=n1; j++) {
            vec[0][j] = 1;
        }
        for(int i=0; i<n2; i++) {
            for(int j=0; j<n1; j++) {
                if(t[i] == s[j]) {
                    vec[i+1][j+1] = (vec[i][j] + vec[i+1][j])%m;
                }
                else {
                    vec[i+1][j+1] = vec[i+1][j];
                }
            }
        } 
        return vec[n2][n1];
    }
};
