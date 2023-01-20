class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        int n = s.size();
        int count = 0;
        map<char,int> mp;
        for(int i = 0; i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]%2==0){
                count=count+mp[s[i]];
                mp[s[i]]=0;
            }
        }
        for(int i = 0;i<n;i++){
            if(mp[s[i]]%2==1){
                count+=mp[s[i]];
                break;
            }
        }
        return count;
    }
};
