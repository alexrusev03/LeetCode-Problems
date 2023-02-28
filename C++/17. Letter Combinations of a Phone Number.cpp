class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string lc;
        vector<string> res;
        if(digits.size()==0){
            return res;
        }
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        helper(0, lc, mapping, digits, res);
        return res;      
    }
    void helper(int idx, string &lc, string mapping[], string digit, vector<string> &res){
        if(idx==digit.size()){
            res.push_back(lc);
            return;
        }
        string let = mapping[digit[idx]-'0'];

        for(int i=0; i<let.size(); i++){
            lc+=let[i];
            helper(idx+1, lc, mapping, digit, res);
            lc.pop_back();
        }
    }
};
