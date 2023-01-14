class Solution {
public:
    vector<string>vec;
    void solve(string curr,string s, int i){
        if(i==s.length()){
            vec.push_back(curr);
            return;
        }
        
        if(isdigit(s[i])){ 
            curr.push_back(s[i]);
            solve(curr,s,i+1);
        }
        else{
            string s1 = curr;
            s1.push_back(tolower(s[i]));
            solve(s1,s,i+1);
            string s2 = curr;
            s2.push_back(toupper(s[i]));
            solve(s2,s,i+1);
        }
    }
    
    vector<string> letterCasePermutation(string S) {
        vec.clear();
        solve("",S,0);
        return vec;
    }
};
