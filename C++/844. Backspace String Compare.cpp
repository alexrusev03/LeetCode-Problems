class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1=s.size();
        int n2 = t.size();
        vector<char> v1;
        vector<char> v2;
        for(int i = 0; i<n1; i++){
            if(s[i]!='#')
                v1.push_back(s[i]);
            else if(v1.size()!=0 && s[i]=='#')
                v1.pop_back();
        }
        for(int i = 0; i<n2; i++){
            if(t[i]!='#')
                v2.push_back(t[i]);
            else if(v2.size()!=0 && t[i]=='#')
                v2.pop_back();
        }
        return v1==v2;
    }
};
