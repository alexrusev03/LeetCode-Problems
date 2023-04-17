class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        vector<int> res;
        int m=words.size();
        int n=words[0].size();
        for(int i = 0; i<m; i++){
            mp[words[i]]++;
        }
        for(int i=0;i<s.size()-m*n+1;i++){
            unordered_map<string,int> map;
            int check=1;
            for(int j = 0; j<m; j++){
                string t=s.substr(i+j*n,n);
                map[t]++;
                if(map[t]>mp[t]){
                    check=0;
                    break;
                }
            }
            if(check==1){
                res.push_back(i);
            }
        }
        return res;
    }
};
