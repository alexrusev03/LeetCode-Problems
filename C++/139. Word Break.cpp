class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        int n=s.size();
        vector<bool>dp(n+1,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            if(!dp[i]){continue;}
            for(int j=i+1;j<n+1;j++){
                if(dict.count(s.substr(i,j-i)))
                dp[j]=1;
            }
        }
        return dp[n];
    }
};
