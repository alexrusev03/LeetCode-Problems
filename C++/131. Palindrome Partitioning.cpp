class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<string> subS;
        vector<vector<string>> res;
        solve(s,0,subS,res);
        return res;
    }
    void solve(string& s, int idx,vector<string>& subS,vector<vector<string>>& res){
        if (idx==s.size()){
            res.push_back(subS);
            return;
        }
        for (int i = idx; i <s.length() ; i++){
            if(check(s,idx,i)){
                subS.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,subS,res);
                subS.pop_back();
            }
        }
    }
    bool check(string s, int i, int j){
        while (i<=j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
};
