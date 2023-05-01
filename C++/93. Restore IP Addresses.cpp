class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        helper(res, "", s, 0, 0);
        return res;
    }
    void helper(vector<string> &res, string p, string &s, int i,  int n) {
        if (i == s.size() && n==4) {
            p.pop_back();
            res.push_back(p);
            return;
        }
        if(n > 4){
            return;   
        }
        else{
            for(int j=i; j<i + 3 &&  j<(int)s.size(); j++) {
                if(stoi(s.substr(i, j - i + 1)) <= 255 && (i == j || s[i] != '0')) {
                    helper(res, p + s.substr(i, j - i + 1) + ".", s, j+1, n+1);
                }
            }
        }
    }
};
