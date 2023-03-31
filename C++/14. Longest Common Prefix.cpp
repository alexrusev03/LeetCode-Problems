class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1=strs[0];
        string res;
        for (int i=0; i<str1.size(); i++){
            for (int j=1; j<strs.size(); j++){
                if (strs[j][i] != str1[i]){
                    return res;
                }
            }
            res+=str1[i];
        }
        return res;
    }
};
