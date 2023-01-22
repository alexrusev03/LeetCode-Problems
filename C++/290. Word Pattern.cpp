class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s=s+' ';
        int n = s.size();
        int m = pattern.size();
        string str;
        vector<string>vec;
        for(int i = 0; i<n; i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
                vec.push_back(str);
                str.clear();
            }
        }
        int wordCount=vec.size();
        if(m!=wordCount){return false;}
        for(int k = 0; k<m-1; k++){
            for(int l = k+1; l<m; l++){
                if(pattern[k]==pattern[l] && vec[k]==vec[l]){
                    continue;
                }
                else if(pattern[k]!=pattern[l] && vec[k]!=vec[l]){
                    continue;
                }
                else{return false;}
            }
        }
        return true;
    }
};
