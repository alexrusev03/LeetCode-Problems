class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k){
            return false;
        }
        vector<int> vec(26);
        for(int i = 0; i<s.size(); i++){
            vec[s[i]-'a']++;
        }
        int res=0;
        for(int i = 0; i<26; i++){
            if(vec[i]%2==1){
                res++;
            }
        }
        return res<=k;
    }
};
