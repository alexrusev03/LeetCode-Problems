class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int res = 0;
        int ch = 0;
        int co = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(ch < g.size() && co < s.size()){
            if(s[co] >= g[ch]){
                res++;
                ch++;
            }
            co++;
        }
        return res;
    }
};
