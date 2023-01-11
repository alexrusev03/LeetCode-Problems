class Solution {
public:
    void combi(int num, vector<int> &temp, vector<vector<int>> &combs, int n, int k){
        if(temp.size()==k){
            combs.push_back(temp);
            return;
        }
        for(int i = num; i<=n; i++){
            temp.push_back(i);
            combi(i+1,temp,combs,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> combs;
        combi(1,temp,combs,n,k);
        return combs;
    }
};
