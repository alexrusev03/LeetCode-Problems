class Solution {
public:
    bool isSubsequence(string s, string t) {   
        if(helper(s,t,s.size(),t.size())!=false){
            return true;
        }
        return false;
    }
    bool helper(string& s, string& t, int i, int j){
        if(i == 0){
            return true;
        }
        if(j == 0){
            return false;
        }
        if (s[i-1] == t[j-1]){
            return helper(s,t,i-1,j-1);
        }
        return helper(s,t,i,j-1);
    }
};
