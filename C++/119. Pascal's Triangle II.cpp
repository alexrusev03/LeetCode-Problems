class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> sol = {{1},{1,1}};
        for(int i = 2; i<=rowIndex;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j = 0; j<sol[sol.size()-1].size()-1;j++){
                temp.push_back(sol[i-1][j]+sol[i-1][j+1]);
            }
            temp.push_back(1);
            sol.push_back(temp);
        }
        return sol[rowIndex];
    }
};
